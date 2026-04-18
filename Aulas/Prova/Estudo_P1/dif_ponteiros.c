#include <stdio.h>


int main() {
    // CENÁRIO 1: *p++
    int numeros_A[2] = {10, 20};
    int *p_A = numeros_A; // Aponta pro 10
    
    int lido = *p_A++;    // Lê o 10. Depois, p_A pula para a próxima gaveta.
    
    printf("Lido: %d\n", lido);       // Imprime 10
    printf("No array: %d\n", numeros_A[0]); // Imprime 10 (A gaveta original NÃO mudou)
    printf("Ponteiro aponta para: %d\n\n", *p_A); // Imprime 20 (O ponteiro andou!)


    // CENÁRIO 2: (*p)++
    int numeros_B[2] = {10, 20};
    int *p_B = numeros_B; // Aponta pro 10
    
    (*p_B)++; // Abre a gaveta e soma 1 direto no valor!
    
    printf("No array: %d\n", numeros_B[0]); // Imprime 11! (A gaveta original FOI ALTERADA)
    printf("Ponteiro aponta para: %d\n", *p_B);   // Imprime 11 (O ponteiro NÃO andou, continua na 1ª gaveta)
    
    return 0;
}