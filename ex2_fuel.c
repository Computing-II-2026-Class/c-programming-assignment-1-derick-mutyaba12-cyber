/* Name: MUTYABA DERICK*/
/* Student Number: 25/U/BIE/01399/PE */

#include <stdio.h>

int main() {
    float distance, fuel, efficiency;

    printf("Enter distance (km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel);

    efficiency = distance / fuel;

    printf("\n----- FUEL REPORT -----\n");
    printf("Distance Travelled: %.2f km\n", distance);
    printf("Fuel Used: %.2f litres\n", fuel);
    printf("Fuel Efficiency: %.2f km/l\n", efficiency);
    printf("------------------------\n");

    return 0;
}