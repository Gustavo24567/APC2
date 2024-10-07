#include <stdio.h>

    int main() {
        char string[] = "Exercicio de APC II";
        int i = 0;
        char *ptr = string;  
        char *end_ptr = string;  


        while (*end_ptr != '\0') {

            end_ptr++;
        }

        int quantidade = (end_ptr - ptr) - 1 ;

        printf("Quantidade de caracteres: %d\n", quantidade);



    return 0;
}