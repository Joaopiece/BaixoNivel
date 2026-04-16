#include <stdio.h>

void copiarVetor(int vet[], int vet2[], int tam);

void copiarVetor(int vet[], int vet2[], int tam) {
    for(int i=0; i<tam; i++) {
        *vet2 = *vet;
        vet2++;
        vet++;
    }
}

void exibeVetor(int vet[], int tam) {
    for(int i=0; i<tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}


int main () {
    int vet [] = {4,3,6,7,67,67,67,67,9};
    int vet2 [9];
    copiarVetor(vet, vet2, 9);
    exibeVetor(vet, 9);
    exibeVetor(vet2, 9);
}