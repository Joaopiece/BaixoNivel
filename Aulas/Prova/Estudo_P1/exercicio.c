#include <stdio.h>


void inverteValor (int vetor[], int tamanho); 

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

    inverteValor(v, 12);

    // Após inverteValor(v, 12);
    printf("Vetor invertido: ");
        for(int i = 0; i < 12; i++) {
             printf("%d ", v[i]);
            }
        printf("\n");
}

void inverteValor(int vetor[], int tamanho) {
    // Implementação aqui, por exemplo:
    for(int i = 0; i < tamanho / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}