#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool eh_palindromo(char* aux);

bool eh_palindromo(char* aux) {

    int inicio = 0;
    int fim = strlen(aux) - 1; 

    while(inicio < fim) {
        if (aux[inicio] != aux[fim]) {
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

int main() {
    char str1[17] = "ovo";
    bool resultado = eh_palindromo(str1);
    printf("Palavra : %s\n", str1);
    printf("É palíndromo? %s\n", resultado ? "Sim" : "Não" );
    return 0;
}