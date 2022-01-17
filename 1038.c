#include <math.h>
#include <stdio.h>
int main() {
int quantia, codigo;
scanf("%d",&codigo);
scanf("%d",&quantia);
if (codigo==4)
printf("Total: R$ %.2f\n",2.00*quantia);
else
if (codigo==2)
printf("Total: R$ %.2f\n",4.50*quantia);
else
if (codigo==5)
printf("Total: R$ %.2f\n",1.50*quantia);
else
if (codigo==1)
printf("Total: R$ %.2f\n",4.00*quantia);
else
if (codigo==3)
printf("Total: R$ %.2f\n",5.00*quantia);
return 0;
}
