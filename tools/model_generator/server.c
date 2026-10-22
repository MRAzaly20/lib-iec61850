#include "iec61850_server.h"
#include "static_model.h"
#include <hal_thread.h>
#include <stdio.h>

int main() {
    IedServer iedServer = IedServer_create(&iedModel);
    IedServer_setLocalIpAddress(iedServer, "127.0.0.1");
    IedServer_start(iedServer, 8383);
    printf("Server started\n");

    while(1) Thread_sleep(1000);

    IedServer_destroy(iedServer);
    return 0;
}