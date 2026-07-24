#include <stdio.h>

// Function to calculate next service
int calculateNextService(int lastService, int interval) {
    return lastService + interval;
}

// Function to check service status
void checkService(int currentKm, int nextService) {
    if (currentKm >= nextService) {
        printf("⚠️ Service Due Now!\n");
    } else {
        printf("✅ Service not due yet.\n");
        printf("Remaining KM: %d km\n", nextService - currentKm);
    }
}

int main() {
    int currentKm, lastService, interval, nextService;

    printf("Enter current vehicle KM: ");
    scanf("%d", &currentKm);

    printf("Enter last service KM: ");
    scanf("%d", &lastService);

    printf("Enter service interval (km): ");
    scanf("%d", &interval);

    nextService = calculateNextService(lastService, interval);

    printf("\nNext Service at: %d km\n", nextService);

    checkService(currentKm, nextService);

    return 0;
}
