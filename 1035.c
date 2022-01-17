#include <stdio.h>
int main()
{
 int variavel3, variavel1, variavel2, variavel4;

 scanf("%d", &variavel1);
  scanf("%d", &variavel2);
   scanf("%d", &variavel3);
    scanf("%d", &variavel4);

 if (variavel3 < variavel2 && variavel1 < variavel4 && variavel4+variavel3 > variavel2+variavel1 && variavel3 > 0 && variavel4 > 0 && variavel1%2 == 0)
 {
  printf("Valores aceitos\n");
 }

 else
 {
  printf("Valores nao aceitos\n");
 }

 return 0;
}
