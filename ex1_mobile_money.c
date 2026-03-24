/* Name: MUTYABA DERICK */
/* Student Number: 25/U/BIE/01399/PE */

#include <stdio.h>

int main() {
    float amount, feePercent, feeAmount, totalDeducted;

    printf("Enter amount to send: ");
    scanf("%f", &amount);

    printf("Enter transaction fee (%%): ");
    scanf("%f", &feePercent);

    feeAmount = (feePercent / 100) * amount;
    totalDeducted = amount + feeAmount;

    printf("\n----- TRANSACTION SUMMARY -----\n");
    printf("Amount Sent: %.2f UGX\n", amount);
    printf("Fee: %.2f UGX\n", feeAmount);
    printf("Total Deducted: %.2f UGX\n", totalDeducted);
    printf("--------------------------------\n");

    return 0;
}
