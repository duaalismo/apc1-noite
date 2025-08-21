#include <stdio.h>
#include <locale.h> // Biblioteca de idiomas

int main(){
    setlocale(LC_ALL, ""); // define o idioma pt-BR
    printf("Olá Pessoal\n");
    printf("Em que posso ajudar?\n");
    printf("Gere minha NOTA LEGAL\n");
    printf("======================\n");
    printf(" N O T A   L E G A L \n");
    printf("======================\n");
    printf("Produto    QTD   Valor\n");
    printf("Caderno    001   50,00\n");
    printf("Lápis      002    7,50\n");
    printf("======================\n");
    printf("Total:           65,00\n");

    // especificador de formato
    // %c - imprimir um caracter
    // %s - imprimir um texto (string)
    // %i - imprimir um inteiro
    // %f - imprimir um fracionario (float)

    printf("%-15s %03i %10.2f\n", "Caneta", 3, 11.75);
    printf("%-15s %03i %10.2f\n", "Postit", 3, 100.00);

    return 0;
}