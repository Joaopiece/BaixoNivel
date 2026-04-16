#include <stdio.h>

char* minha_strcat(char* s1, char* s2);

char* minha_strcat(char* s1, char* s2) {
    char* pntr1 = s1;
    char* pntr2 = s2;

    while(*pntr1 != '\0')
        pntr1++;
    while (*pntr2 != '\0') {
        *pntr1 = *pntr2;
        pntr1++;
        pntr2++;
    }
    return s1;
}

int main() {
    char str1[30] = "Minha string";
    char str2[] = "maior";

    printf("Antes: %s\n", str1);
    minha_strcat(str1, str2);
    printf("Após: %s\n", str1);
}