#include <math.h>
#include <stdio.h>
void test(int resp){
    if(8000>=resp){
            printf("Inseto!\n");
    }
    else
    {
            printf("Mais de 8000!\n");
    }
}
int main(){
   int numerocasotest, energia;
    scanf("%d",&numerocasotest);
    while(0<numerocasotest){
        scanf("%d",&energia);
        test(energia);
    numerocasotest--;
    }
return 0;
}
