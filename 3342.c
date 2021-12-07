#include <stdio.h>
int main()
{
    int N, Casasbrancas, casaspretas, calculo1, calculo2;

   
    scanf("%d",&N);
    calculo1 = N*N;
    casaspretas=calculo1/2;
    calculo2 = calculo1 % 2;
    if (calculo2 == 0)
    {
        Casasbrancas = (calculo1/2);
    }
   else
   Casasbrancas=((calculo1/2)+1);

    printf("%d casas brancas e %d casas pretas\n", Casasbrancas, casaspretas);
   
    return 0;
}