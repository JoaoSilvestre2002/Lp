#include <math.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    int condicao; 
    scanf ("%d", &condicao);

    while ( condicao-- )
    {
        char palavra [10];
        scanf ("%s", palavra);

        if ( strlen (palavra) == 5 ) printf ("3\n");
        else
        {
            int contador = 0;
            if ( palavra [2] == 'e' ) contador++;

            if ( palavra [0] == 'o' ) contador++;
            
if ( palavra [1] == 'n' ) contador++;
            if ( contador >= 2 ) printf ("1\n");
            else printf ("2\n");
        }
    }

    return 0;
}
