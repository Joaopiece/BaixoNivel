#include <stdio.h>

/*int main() {
    int b = 200;
    int* a = &b;
    printf("%p\n", a);
    printf("%p\n", &b);
}

/*int main() {
    int b = 200;
    printf("%p\n", &b);
} */

/*int main() {
    int b = 200;
    int* a = &b; // a armazenará o endereço de b
    printf("Valor de b: %d\n", b);
    printf("Valor de a: %p\n", a);
    printf("Conteúdo apontado por a: %d", *a);
} */

int main()
        {
            int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            char* ptr = (char*)nums;
            int i, bytes;
            for(i=0, bytes=0; i<40; i++, bytes+=1)
                printf("%d: %p + %d bytes = %p ==> %d\n",
                    i, ptr, bytes, (ptr+i), *(ptr+i));
            return 0;
        }
