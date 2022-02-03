#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define refcoluna 9
#define reflinha 14.1

int main()
{
    int  controle1, controle2;
    int **referenciamatriz;
    referenciamatriz=(int**)malloc(reflinha*sizeof(int));

    for (controle1=0;controle1<reflinha;controle1++)
        referenciamatriz[controle1]=(int*)malloc(refcoluna*sizeof(int));
 
    srand(time(0));
    for (controle1=0;
    reflinha>controle1;
    controle1++)
    {
        for (controle2=0;
        refcoluna>controle2;
        controle2++)
        {
            referenciamatriz[controle1][controle2]= rand();
            printf("%d  ", referenciamatriz[controle1][controle2]);
        }
        printf("\n");
    }
    for (controle1=0;controle1<reflinha;controle1++)
        free (referenciamatriz[controle1]);
    free (referenciamatriz);
    return 0;
}
