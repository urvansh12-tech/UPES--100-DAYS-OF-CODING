//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *wordStart = NULL;
    int i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; 

    while (1) {
        if (wordStart == NULL && str[i] != ' ' && str[i] != '\0')
            wordStart = &str[i];
        if ((str[i] == ' ' || str[i] == '\0') && wordStart != NULL) {
            reverseWord(wordStart, &str[i - 1]);
            wordStart = NULL; 
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Sentence after reversing each word:\n%s\n", str);

    return 0;
}
