#include <math.h>
#include <stdio.h>
int main() {
    int quantidadebola, quantidadegalhos, Resposta;
    scanf("%d", &quantidadebola);
    scanf("%d", &quantidadegalhos);
    Resposta = quantidadegalhos*0.5 - quantidadebola;
    if (0 < Resposta)
        printf("Faltam %d bolinha(s)\n", Resposta);
    else
        printf("Amelia tem todas bolinhas!\n");
    return 0;
}
