#include <stdio.h>
#define STRLEN 100

int main(void) {
    char s[STRLEN];

    printf("Hellow World!!\n");

    printf("enter: ");
    fgets(s, STRLEN, stdin);
    printf("yours: ");
    fputs(s, stdout);

    return 0;
}