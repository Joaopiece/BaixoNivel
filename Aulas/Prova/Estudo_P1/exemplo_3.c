#include <stdio.h>

int main() {
    char texto[2][5] = {
        {'a', 'b', 'c', 'd', 'e'},
        {'A', 'B', 'C', 'D', 'E'}
    };

    char *ptr1, *ptr2;
    int i;

    ptr1 = (char*) texto;
    ptr1 = ptr1 + 9;

    ptr2 = (char*) texto;

    for (i = 0; i < 5; i++) {
        *ptr1 = *ptr2;
        ptr1--;
        ptr2++;
    }

    ptr2 = texto[0];

    for (i = 0; i < 10; i++) {
        printf("%c \n", *ptr2);
        ptr2++;
    }

    return 0;
}