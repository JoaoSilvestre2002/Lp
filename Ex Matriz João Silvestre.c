#include <stdio.h>
#include <math.h>
int main()
{
    int i, linhascoluna, colunasmatriz;
    i=0;
    int matriz[2][2];
    for (linhascoluna=0;linhascoluna<3;linhascoluna++)
    {
        for (colunasmatriz=0;colunasmatriz<3;colunasmatriz++)
        {
            i++;
            matriz[colunasmatriz][linhascoluna]=i;
            printf("%d ", matriz[colunasmatriz][linhascoluna]);
        }
        printf("\n");
    }
}