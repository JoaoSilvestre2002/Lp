#include <stdio.h>

int main()
{
    double flutuacao1, flutuacao2, pib, calculo1, calculo2, calculo3;
   
    scanf("%lf",&flutuacao1);
    scanf("%lf",&flutuacao2);
    calculo1 = (100+flutuacao1);
    calculo2 = (calculo1/100);
    calculo3 = (flutuacao2*calculo2);
    pib = ((calculo3) + flutuacao1);
    
    printf("%.6lf\n", pib);

    return 0;
}