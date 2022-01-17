 #include <math.h>
 #include <stdio.h>
int main() {
      int referencia, value;
     float variavel;
    for(referencia=1;referencia <=6;referencia++)
    {
    scanf("%f",&variavel);
        if(0<=variavel)
        {   
       value=value+1;
        }
    }
    printf("%d valores positivos\n",value);

    return 0;
}
