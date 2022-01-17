#include <math.h>
#include <stdio.h>
int main() {
int quantia,resposta, notascem , notas50 , notas20 , notas10 , notas5 , notas2;
scanf("%d",&quantia);
resposta = quantia;
notascem = resposta * 0.01;
resposta = resposta - (notascem/0.01);
notas50 = resposta * 0.02;
resposta = resposta - (notas50/0.02);
notas20 = resposta*0.05;
resposta = resposta - (notas20/0.05);
notas10 = resposta*0.1;
resposta = resposta -(notas10/0.1);
notas5 = resposta*0.2;
resposta = resposta - (notas5/0.2);
notas2 = resposta*0.5;
resposta = resposta - (notas2/0.5);
printf("%d\n",quantia);
printf("%d nota(s) de R$ 100,00\n",notascem);
printf("%d nota(s) de R$ 50,00\n",notas50);
printf("%d nota(s) de R$ 20,00\n",notas20);
printf("%d nota(s) de R$ 10,00\n",notas10);
printf("%d nota(s) de R$ 5,00\n",notas5);
printf("%d nota(s) de R$ 2,00\n",notas2);
printf("%d nota(s) de R$ 1,00\n",resposta);
return 0;

}
