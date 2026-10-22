#include <pcap.h>
#include <stdio.h>

int main() {
    pcap_if_t *alldevs;
    pcap_if_t *d;
    char errbuf[PCAP_ERRBUF_SIZE];

    if (pcap_findalldevs(&alldevs, errbuf) == -1) {
        printf("Error: %s\n", errbuf);
        return -1;
    }

    int i = 0;
    for (d = alldevs; d != NULL; d = d->next) {
        printf("%d. %s\n", ++i, d->name);
        if (d->description)
            printf("    (%s)\n", d->description);
    }

    pcap_freealldevs(alldevs);

    return 0;
}