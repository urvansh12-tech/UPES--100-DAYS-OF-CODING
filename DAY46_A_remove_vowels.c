//Remove all vowels from a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200], result[200];
    int i, j = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for(i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]); 

        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            result[j++] = str[i];  
    }

    result[j] = '\0';  
    printf("String after removing vowels:\n%s", result);

    return 0;
}
