#include <stdio.h>

int main(){
    int idade;

    printf("entre com a idsde do cidadao: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    // operadores logicos
    // 1 - Verdadeiro, 0 - Falso
    // E -&& - Falso E qualquer coisa = Falsa
    // OU - || - Verdadeiro OU qualquer coisa = Falsa
    // NAO -|| - ! - NAO Verdadeiro = Falso, NAO Falso = Verdadeiro

    int eh_obrigado_votar = idade >=18 && idade <= 70;
    int eh_facultativo_votar =( idade >= 16 && idade < 18) || idade > 70;
    int nao_eh_obrigado_votar = !eh_obrigado_votar;
    
    printf("voce tem %i anos e deve votar? %i\n", idade, eh_obrigado_votar);
    printf("voce tem %i anos e pode votar? %i\n", idade, eh_facultativo_votar);


    return 0;
}