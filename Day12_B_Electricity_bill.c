//Q24: Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main() {
    int units;
    float bill_amount;

    printf("Enter the total units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill_amount = units * 0.50;
    } else if (units <= 150) {
        bill_amount = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        bill_amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        bill_amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    float surcharge = bill_amount * 0.20;
    float total_bill = bill_amount + surcharge;

    printf("Electricity Bill = Rs. %.2f\n", total_bill);

    return 0;
}
