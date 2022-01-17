#include <math.h>
#include <stdio.h>
int main() 
{
    int N, quantidadedig, fator, solucao;
    while(1) 
    {
        scanf("%d", &N);
        if (N == 0)
            break;
        fator = 1;
         quantidadedig = 1;
        solucao = (N % 10) * fator;        
        while (9 < N) {
            N = N * 0.1;
            quantidadedig++;
            fator = fator * quantidadedig;
            solucao = (N % 10) * fator + (solucao);
        }
        printf("%i\n", solucao);
    }
    return 0;
}
