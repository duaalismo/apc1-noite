#include <stdio.h>

int main(){

    char pr1[] = "Camiseta";
    char pr2[] = "Calca";
    char pr3[] = "Meia Social";
    float prv1 = 39.99;
    float prv2 = 89.90;
    float prv3 = 19.99;
    float totalidade = 229.85;



    printf("=================================\n");
    printf("%25s\n", "N O T A L E G A L");
    printf("=================================\n");
    printf("%s\t%s\t%s\t%s\n","Produto", "Qtd", "Valor", "Unit");
    printf("=================================\n");
    printf("%s\t%03i\t%2.2f\n", pr1, 2, prv1);
    printf("%-15s\t%03i\t%2.2f\n", pr2, 1, prv2);
    printf("%s\t%03i\t%2.2f\n", pr3, 3, prv3);
    printf("=================================\n");

    return 0;
}