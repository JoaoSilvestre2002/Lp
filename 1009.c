#include <stdio.h>

int main()
{
    double remuneracao, recebimentofinal, x;
    char vendedor;
    
    scanf("%s", &vendedor);
    scanf("%lf %lf", &remuneracao, &x);
    recebimentofinal = ((x*0.15) + remuneracao);
    printf("TOTAL = R$ %.2lf\n", recebimentofinal);
    
return 0;
}