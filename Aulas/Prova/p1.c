#include <stdio.h>

typedef struct {
    int coef, expoente;
} Termo;

void processaPoli(Termo poli[], int totalTermos);

#define MAXTERMOS 10

void processaPoli(Termo poli[], int totalTermos)
{
    int coefs[MAXTERMOS];
    int grau;
    for(int i=0; i<MAXTERMOS; i++) 
        coefs[i] = 0;
            for(int i=0; i<totalTermos; i++) {
                int expo = poli[i].expoente;
                    coefs[expo] += poli[i].coef;
                    if(expo > grau) grau = expo;
}
    for(int i=grau; i >= 0; i--)
        if(coefs[i] != 0) {
            if(i != grau) printf(" + ");
                printf("%d", coefs[i]);
                    if(i > 0)
                    printf("x^%d", i);
}
        printf("\n");
}
int main()
{
Termo poli[] = {{5,4}, {4,2}, {5,0}, {2,1}, {3,2}, {1,0}};
processaPoli(poli, 6);
// Saída: 5x^4 + 7x^2 + 2x^1 + 6
}