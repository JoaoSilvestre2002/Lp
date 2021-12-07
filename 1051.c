#include <stdio.h>
int main() {
float orcamento,calculo18porcent, calculo28porcent, calculo8porcent;
scanf("%f", &orcamento);
if ((orcamento <= 2000.00) && (orcamento > 0.00)) 
{
 printf("Isento\n");
}
if ((orcamento <= 3000.00) && (orcamento > 2000.00)) 
{
 calculo8porcent = (orcamento - 2000.00)*0.08;    
 printf("R$ %.2f\n", calculo8porcent);
}
if ((orcamento <= 4500.00 ) && (orcamento > 3000.00)) 
{
 calculo18porcent = (80 + (orcamento - 3000.00)*(0.18)); 
 printf("R$ %.2f\n", calculo18porcent);
}
if (orcamento > 4500.00)
{
 calculo28porcent = (350 + (orcamento - 4500)*(0.28)); 
 printf("R$ %.2f\n", calculo28porcent);
}
return 0;
}