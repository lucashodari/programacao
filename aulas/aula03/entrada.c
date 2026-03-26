#include <stdio.h>

int main() {
    char tecla_pressionada;
    printf("pessione uma tecla: ");
    scanf("%c", &tecla_pressionada);
    while(getchar() != '\n'); //limpar o buffer
    printf("voce pressionou a tecla '%c'\n", tecla_pressionada);

    int idade;
    printf("informe a sua idade:");
    scanf("%i", &idade);
    printf("voce tem %i anos\n", idade);


    float preco;
    printf("informe o preco da gasolina: ");
    scanf("%f", &preco);
    printf("O preco da gasolina eh %.2f\n", preco);

    return 0;
}