//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], cleanStr[100];
    int i, j = 0, len, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            cleanStr[j++] = tolower(str[i]);
        }
    }
    cleanStr[j] = '\0';

    len = strlen(cleanStr);

    for(i = 0; i < len / 2; i++) {
        if(cleanStr[i] != cleanStr[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
