#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int matricula = 25296738;
    int matriculaDois = 23521980;
    int matriculaTres = 23275980;
    int matriculaQuatro = 23253780;


    printf("=========================================\n");
    printf("%s\t%s\t%-5s %-10s\n","Matricula", "A1", "A2", "Média");
    printf("=========================================\n");
    printf("%i\t%.1f\t%.1f\t%.1f\n", matricula, 8.5, 5.0, 6.4);
    printf("%i\t%.1f\t%.1f\t%.1f\n", matriculaDois, 8.5, 5.0, 6.4);
    printf("%i\t%.1f\t%.1f\t%.1f\n", matriculaTres, 8.5, 5.0, 6.4);
    printf("%i\t%.1f\t%.1f\t%.1f\n", matriculaQuatro, 8.5, 5.0, 6.4);
    printf("=========================================\n");
    

    return 0;



}