#include <stdio.h>

char* minha_strstr_ponteiro(char* string, char* substring) {
    // 1. Caso base (mesma coisa, mas acessando o valor apontado)
    if (*substring == '\0') {
        return string;
    }

    // 2. Caminha pela string principal avançando o ponteiro de endereço em endereço
    for (char* p_atual = string; *p_atual != '\0'; p_atual++) {
        
        // Criamos "ponteiros espiões" para não estragar as posições originais
        char* p_aux_str = p_atual;
        char* p_aux_sub = substring;

        // 3. Enquanto as gavetas não forem nulas e o conteúdo for igual...
        while (*p_aux_str != '\0' && *p_aux_str == *p_aux_sub) {
            p_aux_str++; // Anda 1 byte na string
            p_aux_sub++; // Anda 1 byte na substring
        }

        // 4. Condição de vitória: o espião da substring chegou no final?
        if (*p_aux_sub == '\0') {
            // Retorna o ponteiro de onde a busca começou a bater
            return p_atual; 
        }
    }

    return NULL;
}

int main() {
    char texto[] = "O rato roeu a roupa";
    char palavra[] = "rato";

    // Testando a versão de ponteiros
    char* resultado = minha_strstr_ponteiro(texto, palavra);

    if (resultado != NULL) {
        // Se achou, o ponteiro aponta para o 'r' de "rato roeu a roupa".
        // Se você mandar o printf imprimir como string (%s), ele imprime do 'r' até o fim.
        printf("Encontrado! Resultado a partir do ponteiro: '%s'\n", resultado);
    } else {
        printf("Palavra não encontrada.\n");
    }

    return 0;
}