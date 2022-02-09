# //Joao Silvestre
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define COMPARACAO 0
int main() {
     int sudoku[9][9];
    int referenciahorizontal, referenciavertical; 
    srand(time(NULL));
    for(referenciahorizontal = COMPARACAO; referenciahorizontal < 9; referenciahorizontal++)
    {
        for(referenciavertical = COMPARACAO; 9 > referenciavertical; referenciavertical++)
        {
            sudoku[referenciahorizontal][referenciavertical] = rand();
        }
    }
    for(referenciahorizontal = COMPARACAO; referenciahorizontal < 9; referenciahorizontal++)
    {
        for(referenciavertical = COMPARACAO; 9 > referenciavertical; referenciavertical++)
        {
            printf("%5d ", sudoku[referenciahorizontal][referenciavertical]);
        }
        printf("\n");
    }
return 0;
}
