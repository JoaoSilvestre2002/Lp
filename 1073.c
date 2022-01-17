#include <math.h>
#include <stdio.h>
int main() {
 int referencia, variavel;
     scanf("%d", &variavel);
     for (referencia = 1; referencia <= variavel; ++referencia)
     {
      if(referencia % 2 == 0){
       printf("%d^2 = %d\n", referencia,(referencia*referencia));
      }
     }
    return 0;
}
