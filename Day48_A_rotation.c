//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], temp[400];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("The strings are NOT rotations of each other.\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are NOT rotations of each other.\n");

    return 0;
}
