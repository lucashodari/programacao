#include <stdio.h>

int main(){
    int idade;

    printf("entre com a sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');      

    // operadores relacionais
    // < menor que
    // <= menor ou igual
    // >= maior que 
    // == igualdade
    // != diferenca

    int eh_menor_idade = idade < 18;
    int eh_idoso = idade >= 60;
    int eh_debutante = idade ==15;
    int nao_eh_debutante = idade !=15;

    printf("voce eh menor de idade? %i\n", eh_menor_idade);
    printf("voce eh idoso? %i\n", eh_idoso);
    printf("voce eh debutante? %i\n", eh_debutante);
    printf("voce nao eh debutante? %i\n", nao_eh_debutante);


    return 0;
}