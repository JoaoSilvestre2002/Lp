#include <math.h>
    #include <stdio.h>
    int main()
    {
     double resposta, variavel3, variavel1, variavel4, variavel2;
     scanf("%lf", &variavel1);
     scanf("%lf", &variavel3);
     scanf("%lf", &variavel2);
     scanf("%lf", &variavel4);
     resposta = sqrt(pow(variavel2-variavel1,2)+pow(variavel4-variavel3,2));
     printf("%.4lf\n", resposta);
     return 0;
    }
