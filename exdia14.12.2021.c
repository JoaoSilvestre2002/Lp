#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Joao Silvestre
int main()
{
    int controle, variavel2, vetor, x;
    variavel2=0;
    x=5000;
    for (controle=0;controle<x;controle++){
        vetor=malloc(xsizeof(int));
        vetor[controle]=variavel2;
        variavel2++;
        printf("%d \n", vetor[controle]);
    }
    return 0;
}

