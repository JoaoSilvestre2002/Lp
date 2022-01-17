#include <math.h>
#include <stdio.h>
int main() {
int ano, dias, meses, numeroint;
scanf("%d",&numeroint);
ano=numeroint/365;
meses=(numeroint%365)/30;
dias=(numeroint%365)%30;
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,meses,dias);
return 0;
}
