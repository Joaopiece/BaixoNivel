#include <stdio.h>

int main() {

    int v[12] = {10, 20, 30, 40, 50, 43, 23, 40, 31, 56, 2, 67};
    int maior = v[0];
    int menor = v[0];

    for(int i = 1; i < 12; i++) {
        if(v[i] < menor) {
            menor = v[i];
        }
        if(v[i] > maior) {
            maior = v[i];
        }
    }

    printf("O maior número encontrado no vetor é : %d\n", maior);
    printf("O menor número encontrado no vetor é : %d\n", menor);
}