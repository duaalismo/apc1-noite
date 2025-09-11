#include <stdio.h>

int main(){

    char numero1 = 10;
    int numero2 = 20;

    // operadores aritmeticos
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = numero1 * 1.0 / numero2;
    int resto_da_divisao = numero1 % numero2;

    printf("A soma de %i e %i eh %i\n", numero1, numero2, soma);
    printf("A subtracao de %i e %i eh %i\n", numero1, numero2, subtracao);
    printf("A multiplicacao de %i e %i eh %i\n", numero1, numero2, multiplicacao);
    printf("A divisao de %i e %i eh %.1f\n", numero1, numero2, divisao);
    printf("A resto da divisao de %i e %i eh %i\n", numero1, numero2, resto_da_divisao);

    // operadores incremento e decremento

    int incremento = numero1;
    incremento++;
    int decremento = numero1;
    decremento--;

    printf("O incremento de %i eh %i\n", numero1 + incremento);
    printf("O decremento de %i eh %i\n", numero1 + decremento);

    int pre_incremento = numero1;
    int pos_incremento = numero1;

    printf("O pre_incremento de %i eh %i\n", numero1, 
            ++pre_incremento);
    printf("O pos_incremento de %i eh %i\n", numero1, 
            ++pos_incremento);
    
    printf("O valor do pos_incremento depois eh %i\n", 
            pos_incremento);

    // operadores relacionais

    int menor_que = numero1 < numero2;
    int menor_ou_igual = numero1 <= numero2;
    int maior_que = numero1 > numero2;
    int maior_ou_igual = numero1 >= numero2;
    int igual = numero1 == numero2;
    int diferente = numero1 != numero2;

    printf("O numero %i eh menor que %i? %i\n", numero1, numero2, menor_que);
    printf("O numero %i eh menor ou igual que %i? %i\n", numero1, numero2, menor_ou_igual);
    printf("O numero %i eh maior que %i? %i\n", numero1, numero2, maior_que);
    printf("O numero %i eh maior ou igual que %i? %i\n", numero1, numero2, maior_ou_igual);
    printf("O numero %i eh igual que %i? %i\n", numero1, numero2, igual);
    printf("O numero %i eh diferente que %i? %i\n", numero1, numero2, diferente);

    return 0;
}