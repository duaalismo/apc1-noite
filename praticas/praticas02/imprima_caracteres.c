#include <stdio.h>
#include <locale.h> // Biblioteca de idiomas

int main(){
    setlocale(LC_ALL,"");
    printf("%c\n", 'A');
    printf("%s\n", "Estou aprendendo a programar na Linguagem C!");
    printf("%20s\n", "Café");
    printf("%-20s\n", "Café");
    return 0;
}