#include <math.h>
#include <stdio.h>
 
int main() { 
    int tempofinal, tempocomeco;

    scanf("%d", &tempocomeco);
        scanf("%d", &tempofinal);
    
    if (tempofinal < tempocomeco) { 
        printf("O JOGO DUROU %d HORA(S)\n", 24 - (tempocomeco - tempofinal));
    } else if (tempocomeco < tempofinal) {
        printf("O JOGO DUROU %d HORA(S)\n", tempofinal - tempocomeco);
    } else {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
