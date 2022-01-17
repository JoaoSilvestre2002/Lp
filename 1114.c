   #include <math.h>
    #include <stdio.h>
 int main()
{
    int variavel;
    variavel= 1;
    while(variavel != 2002)
    {
        scanf("%d", &variavel);
        if(variavel == 2002)
        {
            printf("Acesso Permitido\n" );
            return 0;
        }else
        {
            printf("Senha Invalida\n" );
        }
    }
    return 0;
}
