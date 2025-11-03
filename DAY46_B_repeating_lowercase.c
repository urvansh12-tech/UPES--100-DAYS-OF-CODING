//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i, freq[26] = {0};  
    char firstRepeat = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {  
            int index = str[i] - 'a';
            freq[index]++;

            if(freq[index] == 2) {  
                firstRepeat = str[i];
                break;
            }
        }
    }

    if(firstRepeat != '\0')
        printf("First repeating lowercase alphabet: %c\n", firstRepeat);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
