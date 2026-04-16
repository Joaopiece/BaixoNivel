#include <stdio.h>

void inverteVetor(int vet[], int tam); 

void inverteVetor(int vet[], int tam) {
    int *ptr = vet;
    int *ptr2 = vet + tam - 1;
    while (ptr < ptr2) {
        int tmp = *ptr; 
        *ptr = *ptr2;
        *ptr2 = tmp;
        ptr++;
        ptr2--;
    }
}

int main() {
    int vetor[5] = {8,4,5,3,2};
    printf("Vetor original:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    inverteVetor(vetor, 5);
    printf("Vetor invertido:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}