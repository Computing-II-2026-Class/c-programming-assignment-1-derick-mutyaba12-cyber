/* Name: MUTYABA DERICK*/
/* Student Number: 25/U/BIE/01399/PE */

#include <stdio.h>

int main() {
    int units;
    float costPerUnit, totalBill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Enter cost per unit: ");
    scanf("%f", &costPerUnit);

    totalBill = units * costPerUnit;

    printf("\n----- ELECTRICITY BILL SUMMARY -----\n");
    printf("Units Consumed : %d\n", units);
    printf("Cost per Unit  : %.2f UGX\n", costPerUnit);
    printf("Total Bill     : %.2f UGX\n", totalBill);
    printf("-----------------------------------\n");

    return 0;
}
