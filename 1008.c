#include <stdio.h>
int main() 
{
    double recebimento;
    int number, quantidadehorastrab;
    scanf("%d %d", &number, &quantidadehorastrab);
    scanf("%lf", &recebimento);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", quantidadehorastrab*recebimento);
return 0;
}