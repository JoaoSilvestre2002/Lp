#include <math.h>
#include <stdio.h>
int main() {
float valor2,valor1,valor3;
scanf("%f",&valor1);
scanf("%f",&valor2);
scanf("%f",&valor3);
printf("TRIANGULO: %.3f\n",valor1*valor3/2);
printf("CIRCULO: %.3f\n",3.14159*valor3*valor3);
printf("TRAPEZIO: %.3f\n",(valor1+valor2)*valor3/2);
printf("QUADRADO: %.3f\n",valor2*valor2);
printf("RETANGULO: %.3f\n",valor1*valor2);
return 0;
}
