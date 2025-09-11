#include <stdio.h>
#include <math.h>

int main(){
    
    float nota1;
    float nota2;
    float mediaNotas;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota\n");
    scanf("%f", &nota2);

    mediaNotas = (nota1 + nota2) / 2;

    printf("A media das suas notas: %.2f\n", mediaNotas);


    return 0;
}