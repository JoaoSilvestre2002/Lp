#include<math.h>
#include<stdio.h>
int main()
{
    int momento, variavel, resultado;

    while(scanf("%d%d", &variavel, &momento) != EOF)
    {

        resultado = 2 * momento * variavel;

        printf("%d\n", resultado);
    }

    return 0;
}
