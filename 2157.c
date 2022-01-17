 #include <math.h>
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int variavel, inferior, superior, controle, controle2;
    scanf("%d", &variavel);
    
    char str[6];
    
    while (variavel--) {
        scanf("%d", &inferior);
        scanf("%d", &superior);
        for (controle = inferior; controle <= superior; controle++)
            printf("%d", controle);
        for (controle = superior;controle >= inferior; controle--) {
            sprintf(str, "%d", controle);
            for (controle2 = strlen(str)-1; controle2 >= 0; controle2--)
                printf("%c", str[controle2]);
        }
        printf("\n");
    }

    return 0;
}
