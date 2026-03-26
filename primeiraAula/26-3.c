#include <stdio.h>

void exibeMemoria(char* ptr, int tam);

void exibeMemoria(char* ptr, int tam) {
    for(int i=0; i<tam; i++) {
        if(i%16==0) 
            printf("\n%p: ", ptr);
        printf("%p: %u\n", ptr, *ptr);
        ptr++;
    }
}

int main() {
            char* text = "Prog. Sofware Basico";
            int v[] = { 0, 1, 2, 3, 4 };
            int matriz[4][4] = {
                0, 1, 2, 3,
                4, 5, 6, 7,
                8, 9, 10, 11,
                12, 13, 14, 15
            };

    printf("vetor: \n");
        exibeMemoria((char*)v, 5 * sizeof(int));
        printf("\n\nmatriz: \n");
        exibeMemoria((char*)matriz, 16 * sizeof(int));
        }

