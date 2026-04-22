#include <stdio.h>
#include <string.h>

union Cadastro {
    char nome[20]; // Gasta 20 bytes
    int idade;     // Gasta 4 bytes
};

int main() {
    union Cadastro meuDado;

    // Passo 1: Gravamos o nome
    strcpy(meuDado.nome, "Gabriel");
    printf("Acabei de gravar o nome. Nome atual: %s\n", meuDado.nome);

    // Passo 2: Gravamos a idade
    meuDado.idade = 25;
    printf("Acabei de gravar a idade. Idade atual: %d\n", meuDado.idade);

    // Passo 3: Vamos tentar ler o nome de novo?
    printf("Tentando ler o nome agora: %s\n", meuDado.nome);

    return 0;
}