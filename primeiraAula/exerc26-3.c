#include <stdio.h>
int procureNoVetor(int v [], int tam, int valor);

int procureNoVetor(int v [], int tam, int valor) {
    for(int i=0; i<tam; i++) {
        if(*v == valor) 
            return i;
            v++; }
    return -1;
}

int main() {
            int valor = 8;
            int v[] = { 0, 1, 2, 3, 4 };
            int matriz[4][4] = {
                0, 1, 2, 3,
                4, 5, 6, 7,
                8, 9, 10, 11,
                12, 13, 14, 15
            };
    printf("%d\n", procureNoVetor(v,5,valor));
}