#include <stdio.h>
int main()
{
    int dia, x, y, z, w, horasinic, minutinic, segundinic, diasfinal, horasfinal, minutosfinal, segundosfinal;
    scanf("Dia %d\n", &dia);
    scanf("%d : %d : %d\n", &y, &z, &w);
    scanf("Dia %d\n", &x);
    scanf("%d : %d : %d\n", &horasinic, &minutinic, &segundinic);
    segundosfinal =(60-w) + segundinic;
    minutosfinal = (59-z) + minutinic;
   horasfinal = (23-y) + horasinic;
    diasfinal = x - dia;
    if (60<=segundosfinal)
    {
        minutosfinal = (1+minutosfinal);
     segundosfinal = segundosfinal-60;
    }
    if (60 <= minutosfinal)
    {
        horasfinal = (1+horasfinal);
        minutosfinal = minutosfinal-60;
    }
    if (24 <= horasfinal)
    {
        diasfinal = (1+diasfinal);
        horasfinal = horasfinal-24;
    }
    
    if (diasfinal == 1 || diasfinal == 0)
    {
        diasfinal=0;
    }

    else
        diasfinal--;
    printf("%d dia(s)\n", diasfinal);
    printf("%d hora(s)\n", horasfinal);
    printf("%d minuto(s)\n", minutosfinal);
    printf("%d segundo(s)\n", segundosfinal);
return 0;
}