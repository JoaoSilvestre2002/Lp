#include <math.h>
#include <stdio.h>
int main()
{
    double lado1,lado2,lado3;
    scanf("%lf", &lado1);
       scanf("%lf", &lado2);
          scanf("%lf", &lado3);

    if (lado1 < lado2 + lado3 &&lado2 < lado1 + lado3 && lado3 < lado1+ lado2)
    {
        printf("Perimetro = %.1f\n", lado1 + lado2 + lado3);
    }
    else
    {
        printf("Area = %.1f\n", lado3 * (lado1 + lado2) / 2);
    }
    return 0;
}
