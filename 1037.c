#include <math.h>
#include <stdio.h>
int main() {
double variavel;
scanf("%lf",&variavel);
if(100.00<variavel || 0>variavel )
printf("Fora de intervalo\n");
else if(25.0>=variavel)
printf("Intervalo [0,25]\n");
else if(50.0>=variavel)
printf("Intervalo (25,50]\n");
else if(75.0>=variavel)
printf("Intervalo (50,75]\n");
else if(100>=variavel)
printf("Intervalo (75,100]\n");
return 0;
}
