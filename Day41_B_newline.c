//Print each character of a string on a new line.
#include <stdio.h>
#include <string.h> 

int main() {
    char myString[] = "Hello"; 

    for (int i = 0; myString[i] != '\0'; i++) {
        printf("%c\n", myString[i]); 
    }

    return 0;
}
