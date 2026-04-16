#include <stdio.h>

int main(){
    
    unsigned char carater_sem_sinal;
    unsigned int inteiro_sem_sinal;

    short int inteiro_curto;
    long long int inteiro_longo = 10LL; // CPU 64bits

    long double duplo_longo = 1 123456789012345678L;

    printf("tamanho em bytes do 'char' = %ui\n",sizeof(int));
    printf("tamanho em bytes do 'int' = %ui\n", sizeof(int));
    printf("tamanho em bytes do 'short'");
    printf("tamanho em bytes do 'char' = %ui\n",sizeof(int));
    return 0;

    
}