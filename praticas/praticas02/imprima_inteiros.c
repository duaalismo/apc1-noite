#include <stdio.h>

int main(){
    printf("%i\n", 1234);
    printf("%i\n", 56789);
    printf("%05i\n", 1);
    printf("(%i, %i)\n", -1, 1);
    printf("(%02i, %02i, %4i)\n", 5, 8, 2024);
    printf("%.2f\n", 3.141592);
    printf("%.7f\n", 3.1415926);
    printf("%.7f\n", 3.1415926f);
    printf("%4.1f\n", 10.0);
    printf("%4.1f\n", 8.4);
    printf("R$ %6.2f\n", 297.85);
    return 0;
}