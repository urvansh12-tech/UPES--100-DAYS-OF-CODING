#include <stdio.h>

\\Write a program to find profit or loss percentage given cost price and selling price

int main(void) {
    int cp, sp;
    if (scanf("%d %d", &cp, &sp) != 2) return 0;

    if (sp > cp) {
        int percent = (sp - cp) * 100 / cp;
        printf("Profit %d%%", percent);
    } else if (sp < cp) {
        int percent = (cp - sp) * 100 / cp;
        printf("Loss %d%%", percent);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}
