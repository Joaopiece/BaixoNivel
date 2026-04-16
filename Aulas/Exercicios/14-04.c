#include <stdio.h>

typedef struct {
    float p1, p2, trab;
    int faltas;
} Aluno;

void exibeAluno(const Aluno *a);
float calculaMedia(const Aluno *a);
void calculeexibemedia(const Aluno *a);

void exibeAluno(const Aluno *a) {
    printf("Nota da P1: %.1f\n", a->p1);
    printf("Nota da P2: %.1f\n", a->p2);
    printf("Trabalho: %.1f\n", a->trab);
    printf("Faltas: %d\n", a->faltas);
}

float calculaMedia(const Aluno *a) {
    return (a->p1 + a->p2 + a->trab) / 3.0f;
}

void calculeexibemedia(const Aluno *a) {
    float media = calculaMedia(a);
    printf("\n--- Dados do aluno ---\n");
    exibeAluno(a);
    printf("Média final: %.2f\n", media);
    if (media >= 6.0f && a->faltas <= 5) {
        printf("Resultado: aprovado\n");
    } else {
        printf("Resultado: reprovado\n");
    }
}

int main(void) {
    Aluno a1, a2;
    Aluno *p = &a1;

    p->p1 = 8.5f;
    p->p2 = 7.0f;
    p->trab = 6.7f;
    p->faltas = 3;

    a2 = a1;
    a2.p1 = 9.0f;

    calculeexibemedia(&a1);
    calculeexibemedia(&a2);

    return 0;
}


    