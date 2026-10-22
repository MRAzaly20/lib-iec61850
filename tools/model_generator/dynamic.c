#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>

#include "iec61850_server.h"
#include "static_model.h"
#include "hal_thread.h"

static bool running = true;

void sigint_handler(int signalId)
{
    running = false;
}

int main()
{
    printf("Starting MMS Server Simulator...\n");

    /* Create IED Server from static model */
    IedServer server = IedServer_create(&iedModel);

    /* Start MMS server at TCP port 102 */
    IedServer_setLocalIpAddress(server, "127.0.0.1");

    IedServer_start(server, 102);

    if (!IedServer_isRunning(server)) {
        printf("Failed to start MMS server!\n");
        IedServer_destroy(server);
        return -1;
    }

    printf("MMS Server running on port 102\n");

    signal(SIGINT, sigint_handler);

    int counter = 0;

    while (running) {

        /* Update GGIO1 indicators every 5 seconds */
        bool ind1 = (counter % 2 == 0);
        bool ind2 = (counter % 3 == 0);
        bool ind3 = (counter % 4 == 0);
        bool ind4 = (counter % 5 == 0);

        IedServer_updateBooleanAttributeValue(server,
            IEDMODEL_GenericIO_GGIO1_Ind1_stVal, ind1);

        IedServer_updateBooleanAttributeValue(server,
            IEDMODEL_GenericIO_GGIO1_Ind2_stVal, ind2);

        IedServer_updateBooleanAttributeValue(server,
            IEDMODEL_GenericIO_GGIO1_Ind3_stVal, ind3);

        IedServer_updateBooleanAttributeValue(server,
            IEDMODEL_GenericIO_GGIO1_Ind4_stVal, ind4);

        printf("Updated: Ind1=%d Ind2=%d Ind3=%d Ind4=%d\n",
               ind1, ind2, ind3, ind4);

        counter++;
        Thread_sleep(5000);
    }

    printf("Stopping server...\n");
    IedServer_stop(server);
    IedServer_destroy(server);
    return 0;
}