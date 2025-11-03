//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;
    char monthName[12][4] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    if (month < 1 || month > 12) {
        printf("Invalid month entered!\n");
        return 0;
    }

    printf("Converted date: %02d-%s-%04d\n", day, monthName[month - 1], year);

    return 0;
}
