//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[200], str2[200];
    int freq[26] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Count frequency of each character in str1
    for(i = 0; str1[i] != '\0'; i++) {
        if(isalpha(str1[i]))
            freq[tolower(str1[i]) - 'a']++;
    }

    // Subtract frequency using str2
    for(i = 0; str2[i] != '\0'; i++) {
        if(isalpha(str2[i]))
            freq[tolower(str2[i]) - 'a']--;
    }
    
    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram)
        printf("The strings are anagrams of each other.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}
