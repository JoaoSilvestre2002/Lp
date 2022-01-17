#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    int  referencia, entrada, variavel, controle, saida;
    scanf("%d", &variavel);
    saida = 0;
    entrada = 0;
    for(controle=0;controle<variavel;controle++){
        scanf("%d",&referencia);
        if((20>=referencia) && (10<=referencia)){
            entrada++;
        }else{
            saida++;
        }
    }
    printf("%d in\n", entrada);
    printf("%d out\n",saida);
    return 0;
}
