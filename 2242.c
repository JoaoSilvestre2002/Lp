#include <stdio.h>
#include <string.h>
int main()
{
    int controle1, controle2=0, condicao;
    char vet2[60], vet1[60];
    scanf("%s", vet1);
    for(controle1=0; vet1[controle1]; controle1++)
    {
        if(vet1[controle1]=='o' ||vet1[controle1]=='e' ||vet1[controle1]=='i' || vet1[controle1]=='a' || vet1[controle1]=='u')
        {
            vet2[controle2] = vet1[controle1];
            controle2++;
        }
    }
    vet2[controle2] = '\0';
    condicao = strlen(vet2);
    for(controle1=0, controle2=condicao-1; controle1 < condicao; controle1++, controle2--)
    {
        if(vet2[controle1] != vet2[controle2])
        {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}
