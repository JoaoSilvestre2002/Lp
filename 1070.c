  #include <math.h>
    #include <stdio.h>
   int main() {
 int variavel, referencia;
    scanf("%d",&variavel);
    if(variavel%2==0)
        variavel=variavel+1;
    else
        variavel=variavel;
    printf("%d\n",variavel);
    for(referencia=1;5>=referencia;referencia++)
    printf("%d\n",variavel+=2);
    return 0;
}
