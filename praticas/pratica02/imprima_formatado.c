#include <stdio.h> 

int main () {


    printf("=================================\n");
    printf("%21s\n","NOTA LEGAL");
    printf("=================================\n");
    printf("%-15s %5s %10s\n", "produto", "Qtd","valor Unit");
    printf("%-15s %5d %10.2f\n","camiseta",2, 39.99);
    printf("%-15s %5d %10.2f\n","calca", 1, 89.90);
    printf("%-15s %5d %10.2f\n","meia social",3, 19.99);
    printf("=================================\n");
    printf("%-21s %11.2f\n","total",229.85 );

    return 0;
}