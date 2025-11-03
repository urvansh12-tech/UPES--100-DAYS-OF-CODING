//Q23: Write a program to calculate a library fine based on late days.
#include <stdio.h>

double calculateFine(int daysLate) {
    double fine = 0.0;

    if (daysLate <= 0) {
        fine = 0.0; 
    } else if (daysLate <= 7) {
        fine = daysLate * 0.50; 
    } else if (daysLate <= 14) {
        fine = (7 * 0.50) + ((daysLate - 7) * 1.00); 
    } else {
        fine = (7 * 0.50) + (7 * 1.00) + ((daysLate - 14) * 2.00); 
    }
    return fine;
}

int main() {
    int daysLate;
    double totalFine;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);

    totalFine = calculateFine(daysLate);

    printf("The calculated fine is: %.2lf\n", totalFine);

    return 0;
}
