#include <math.h>
#include <string.h>
#include <stdio.h>

int main()
{
     char result[101], corda2[51], corda[51];
    int variavel, x1, referencia, controle, controle2, x2;
    

    scanf("%d", &variavel);

    for (referencia = 0; referencia < variavel; ++referencia) {
        scanf("%s", corda);
         scanf("%s", corda2);
        x2 = strlen(corda2);
        x1 = strlen(corda);
        for (controle2 = 0, controle = 0; x1 > controle && x2 > controle; ++controle, controle2 += 2) 
        {
            result[controle2] = corda[controle];
            result[controle2 + 1] = corda2[controle];
        }

        for (; controle < x1; ++controle, ++controle2)
            result[controle2] = corda[controle];

        for (; controle < x2; ++controle, ++controle2)
            result[controle2] = corda2[controle];

        result[controle2] = '\0';

        puts(result);
    }

    return 0;
}
