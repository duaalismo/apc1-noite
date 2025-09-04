#include <stdio.h>

int main() {

    char tecla;
    int idade;
    float nota;

    printf("Informe os valores das variaveis:\n");
    scanf("%c", &tecla); // scanf nao sabe tecla = valor;
    getchar();
    scanf("%i", &idade); // precisa do &
    getchar();
    scanf("%f", &nota);
    getchar();

    printf("Os valores informado foram:\n");
    printf("tecla = %c\n", tecla);
    printf("idade = %i\n", idade);
    printf("nota = %.1f\n", nota);
    return 0;
}