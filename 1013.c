#include<stdlib.h>
#include <math.h>
#include <stdio.h>

int main() {
 int resposta, numero2, numero3, numero1;
scanf("%d %d %d", &numero1, &numero2, &numero3);
resposta =(numero2+numero1+abs(numero1-numero2))/2;
resposta=(resposta+numero3+abs(resposta-numero3))/2;
printf("%d eh o maior\n",resposta);
    return 0;
}
