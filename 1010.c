#include <math.h>
    #include <stdio.h>
int main() {
    double peca1valor, peca2valor;
int pecacodigo1, peca1numero, pecacodigo2, numeropeca2;

scanf("%d",&pecacodigo1);
scanf("%d",&peca1numero);
scanf("%lf",&peca1valor);
scanf("%d",&pecacodigo2);
scanf("%d",&numeropeca2);
scanf("%lf",&peca2valor);
printf("VALOR A PAGAR: R$ %.2f\n",(peca2valor*numeropeca2)+(peca1valor*peca1numero));
return 0;

}
