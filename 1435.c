#include <math.h>
#include <stdio.h>
int main()
{
    int variavel1,v3,v2,v5,v4,controle1,controle2=1,referencia,controle3=0,controle4=0,v6;
    while(1)
    {
        scanf("%d", &referencia);
        if(referencia==0) break;
        else
        {
            controle2=1;controle3=0;controle4=0;
            int mat[referencia][referencia];
            controle1=referencia;
            if(referencia%2==0)
                v6=referencia/2;
            else if(referencia%2==1)
                v6=(referencia/2)+1;
            for(v3=1; v3<=v6; v3++)
            {
                for(variavel1=controle3; variavel1<controle1; variavel1++)
                {
                    for(v2=controle4; v2<controle1; v2++)
                        mat[variavel1][v2]=controle2;
                }
                controle2++;
                controle3++; controle4++; controle1--;
            }
            for(v4=0; v4<referencia; v4++)
            {
                for(v5=0; v5<referencia; v5++)
                {
                    if(v5==0)
                        printf("%3d",mat[v4][v5]);
                    else printf(" %3d",mat[v4][v5]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
