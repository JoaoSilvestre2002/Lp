#include <stdio.h>
#include <math.h>
int main()
{
    double contador, lado2, lado3, lado1;
    scanf("%lf %lf %lf", &lado1, &lado2, &lado3);
    
    if (lado1 <= 0 || lado2 <= 0 || lado3 <=0)
    {
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if (lado1 < lado2)
        {
           contador= 0;
            contador = lado1;
            lado1 = lado2;
            lado2 = contador;
        }
        
        if (lado1 < lado3)
        {
           contador = 0;
            contador = lado1;
           lado1 = lado3;
            lado3 = contador;
        }
        if (lado1 >= lado3+lado2)
        {
            printf("NAO FORMA TRIANGULO\n");
        }else{
            if (lado1*lado1 == lado3*lado3 + lado2*lado2)
            {
                printf("TRIANGULO RETANGULO\n");
            }
            if (lado1*lado1 > lado3*lado3 + lado2*lado2)
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            if (lado1*lado1 < lado2*lado2 + lado3*lado3)
            {
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
        if (lado3 == lado2 && lado2 == lado1)
        {
            printf("TRIANGULO EQUILATERO\n");
        } 
        if (lado1 == lado2 && lado1 != lado3 || lado2== lado3 && lado2 != lado1 || lado3 == lado1 && lado3 != lado2)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    
return 0;
}