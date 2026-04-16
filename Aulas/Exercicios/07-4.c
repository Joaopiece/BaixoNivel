#include <stdio.h>
#include <string.h>

char* minha_strstr(char* string, char* substring);

char* minha_strstr(char* string, char* substring) {
    int tam_str = strlen(string);
    int tam_sub = strlen(substring);
    for(int pos1 = 0; pos1<=tam_str; pos1++) {
        char achei = 1;
        for(int pos2 = 0; pos2<tam_sub; pos2++) {
            if(string [pos1 + pos2] != substring [pos2]) {
                achei = 0;
                break;
            }
        }
        if(achei) {
            return string + pos1;
        }
   }
   return NULL;
}

int main() {
    char str1[] = "meu nome é joão";
    char str2 [] = "meu";
    char *pos = minha_strstr(str1, str2);

    if (pos != NULL) {
        printf("A substring foi encontrada na string.\n");
    } else {
        printf("A substring não foi encontrada na string.\n");
    }

    return 0;
}
