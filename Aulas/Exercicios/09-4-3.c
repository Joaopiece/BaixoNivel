#include <stdio.h>
#include <string.h>

char* remove_espacos_extra(aux);

char* remove_espacos_extra(aux) {

    int tam_str = strlen(aux);
    int j = 0;

    for(int i = 0; i<tam_str - 1; i++) {
        if(aux[i] != '\0') {
        aux[i] = aux[j];
        j++;
    } else { 
        if(j == 0 || aux[j-1] != '\0') {
            j++;
    }

}

int main () {
    char str[50] = "Meu nome  é  Pedro";
    printf("Antes: %s\n", str);
    remove_espacos_extra(str);
    printf("Após: %s\n", str);
}