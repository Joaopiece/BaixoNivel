#include <stdio.h>


void Exercicio2() {
    int tempo;
    printf("Digite o tempo para calcular: ");
    scanf("%d", &tempo);

    int horas, minutos, segundos;

    horas = tempo/3600;
    tempo = tempo%60;
    minutos = tempo/60;
    segundos = tempo%60;

    printf("A conversão será: %d horas, %d minutos e %d segundos. " , horas, minutos, segundos);

}


int main() {

    /*int valor = 87;
    printf("Digite o valor para calcular o troco: ");
    //scanf("%d", &valor);

    int cem, cinq, dez, cinc, um;
    cem = valor/100;
    valor = valor%100;
    cinq = valor/50;
    valor = valor%50;
    dez = valor/10;
    valor = valor%10;
    cinc = valor/5;
    valor = valor%5;
    um = valor/1;

    printf("O valor de troco será: %d notas de 100, %d notas de 50, %d notas de 10, %d notas de 5 e %d notas de 1. ", cem, cinq, dez, cinc, um);
    ss*/
    Exercicio2();
}