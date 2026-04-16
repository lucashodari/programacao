#include <stdio.h>
#include <math.h>
int main(){
    //1.entrada
    int operador1;
    int operador2;

    printf("entre com um valor inteiro: ");
    scanf("%i", &operador1);
    while(getchar() != '\n');

    printf("entre com outro valor inteiro: ");
    scanf("%i", &operador2);
    while(getchar() != '\n');

    // 2.processamento
    int soma = operador1 + operador2;
    int multiplicacao = operador1 * operador2;
    int subtracao = operador1 - operador2;
    float divisao = operador1 * 1.0f/ operador2;
    int resto = operador1 % operador2; // modulo = resto da divisao
    //precedencia das operacoes
    // 5 + 4 * 1 - 3 / 2
    // 5 + 4 - 1
    // 8
    int expressao = 5 + 4 * 1 -3 / 2;


    /* funcoes da matematica */
    double potencia =pow(operador1, operador2);
    double raiz_quadrada = sqrt(operador1);
    double logaritimo = log(operador1);
    double coseno = cos(operador1 * 3.14 / 180);
    // angulo em radiano => valor * PI /180

    // 3. saida
    printf("%i + %i =%i\n", operador1, operador2, soma);
    printf("%i * %i =%i\n", operador1, operador2, multiplicacao);
    printf("%i - %i =%i\n", operador1, operador2, subtracao);
    printf("%i / %i =%f\n", operador1, operador2, divisao);
    printf("%i %% %i = %i\n", operador1, operador2, resto);
    printf("%i ^ %i =%f\n", operador1, operador2, potencia);
    printf("²/%i = %f\n", operador1, raiz_quadrada);
    printf("log(%i) = %f\n", operador1, logaritimo);
    printf("cos(%i) = %f\n",operador1, coseno);
    printf("5 + 4 * 1 - 3 /2 = %i\n", expressao);




    return 0;

}