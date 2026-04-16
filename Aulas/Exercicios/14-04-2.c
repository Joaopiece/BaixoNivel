#include <stdio.h>

typedef union {
    unsigned char v;
    unsigned char b[4];
} ValorInt;

int main() {
    ValorInt v1;
    v1.v = 225;
    printf("Valor int: %u\n", v1.v);

    for(int i = 0; i<4; i++) {
        printf("%d", v1.b[i]);

    printf("\n");
    v1.b[1] = 225;
    }
}