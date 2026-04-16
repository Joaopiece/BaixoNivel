#include <stdio.h>

void inverteVetor(int vet[], int tam);

void inverteVetor(int vet[], int tam) {
    int pos1 = 0;
    int pos2 = tam-1;
    while(pos1<pos2) {
        int temp = vet[pos1];
        vet[pos1] = vet[pos2];
        vet[pos2] = temp;
        pos1++;
        pos2--;
    }
}

void exibeVetor(int vet[], int tam) {
    for(int i=0; i<tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

/*int main() {
    int vetor[5] = {1,2,3,4,5};
    printf("Vetor original:\n");
    exibeVetor(vetor, 5);
    inverteVetor(vetor, 5);
    printf("Vetor invertido:\n");
    exibeVetor(vetor, 5);
} */

