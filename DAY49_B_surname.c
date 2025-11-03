//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int i, len;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin); 

    name[strcspn(name, "\n")] = '\0';
    len = strlen(name);

    printf("Formatted Name: ");

    if (isalpha(name[0]))
        printf("%c. ", toupper(name[0]));

    for (i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && isalpha(name[i])) {
        
            char *lastSpace = strrchr(name, ' ');
            if (&name[i - 1] == lastSpace)
                break;  
            printf("%c. ", toupper(name[i]));
        }
    }

    char *surname = strrchr(name, ' ');
    if (surname != NULL)
        printf("%s\n", surname + 1);
    else
        printf("\n"); 

    return 0;
}
