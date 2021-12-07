#include <stdio.h>

int main()

{
    int Discagemdiretaadistancia;
    scanf("%d", &Discagemdiretaadistancia);
    
    switch(Discagemdiretaadistancia) {


    case 27:
        printf("Vitoria\n");
        break;
   case 21:
        printf("Rio de Janeiro\n");
        break;
     case 32:
        printf("Juiz de Fora\n");
        break;     
     case 71:
        printf("Salvador\n");
        break;
    
    case 61:
        printf("Brasilia\n");
        break;
        
    case 31:
        printf("Belo Horizonte\n");
        break;
    case 11:
        printf("Sao Paulo\n");
        break;

    case 19:
        printf("Campinas\n");
        break;
   

    default: printf("DDD nao cadastrado\n");
       }
      
     
     
      return 0;
      
     
    
}