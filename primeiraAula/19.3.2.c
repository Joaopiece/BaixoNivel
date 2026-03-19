#include <stdio.h>

int divisaoSegura(int a, int b, int*quociente);

int divisaoSegura(int a, int b, int*quociente) {
    if(b == 0) {
        return 0;
    } else {
    *quociente = a/b;
    return 1;
    }
}

int main() {

    int valorA, valorB;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &valorA, &valorB);
    int res, codigoErro;
    codigoErro = divisaoSegura(valorA, valorB, &res);
    if(codigoErro == 0) {
        printf("Erro! Impossivel dividir por 0!\n");
    }else{
        printf("Resultado da divisão: %d\n", res);
    }
}