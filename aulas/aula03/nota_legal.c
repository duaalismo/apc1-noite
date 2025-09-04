#include <stdio.h>

int main(){

    char produto[30];
    int quantidade;
    float preco;

    printf("informe o nome do produto:\n");
    scanf("%s", produto); // %s nao precisa de &
    getchar();

    printf("informe a quantidade:\n");
    scanf("%i", &quantidade);
    getchar();

    printf("informe o preco do produto:\n");
    scanf("%f", &preco);

    printf("gerando a nota legal....\n");
    printf("========================\n");
    printf("    N O T A L E G A L   \n");
    printf("========================\n");
    printf("Item\tQtd\tPreco\t\n");
    printf("%s\t %i\t %.2f\t\n", produto, quantidade, preco);
    printf("========================\n");


    return 0;
}

