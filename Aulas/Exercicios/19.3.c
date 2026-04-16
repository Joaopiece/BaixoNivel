#include <stdio.h>

void multiMatriz(const int a[5] [3], const int b[3] [4], int c[5] [4]);

void multiMatriz(const int a[5] [3], const int b[3] [4], int c[5] [4]) {
    for(int linha = 0; linha < 5; linha++) {
        for(int col = 0; col<4; col++) {
            c[linha] [col] = 0;
            for(int pos=0; pos<3; pos++) {
                c[linha] [col] += a[linha] [pos] * b[pos] [col];
            }
        }  
    }   
}

int main() {
    
    int matrizA[5] [3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {1,2,3},
        {4,5,6}};
    
    int matrizB[3] [4] = {
        {1,2,3,4},
        {5,6,7,8},
        {1,2,3,4}};
    
    int matrizC[5] [4]; 

    printf("\nMatriz A:\n");

    for(int linha=0; linha<5; linha++) {
        for(int col=0; col<4; col++) {
            printf("%d ", matrizA[linha][col]);
        }
         printf("\n");
    }

    printf("\nMatriz B:\n");
    for(int linha=0; linha<3; linha++) {
        for(int col=0; col<4; col++) {
            printf("%d ", matrizB[linha][col]);
        }
         printf("\n");
    }

    multiMatriz(matrizA, matrizB, matrizC);

    printf("\nMatriz C:\n");
    for(int linha=0; linha<5; linha++) {
        for(int col=0; col<4; col++) {
            printf("%d ", matrizC[linha][col]);
        }
        printf("\n");
    }
}

