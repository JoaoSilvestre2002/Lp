#include <math.h>
    #include <stdio.h>
int main()
{
    int z2,y,variavel,referencia,x,z;
    scanf("%d", &variavel);
    for(referencia=1; variavel>=referencia; referencia++)
    {
        x=referencia*referencia;
        y=referencia*referencia*referencia;
        printf("%d %d %d\n",referencia,x,y);
        z=x+1;
        z2=y+1;
        printf("%d %d %d\n",referencia,z,z2);
    }
    return 0;
}
