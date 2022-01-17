#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int numbern,numberm,controle, vet[15];

	while(scanf("%d %d",&numberm,&numbern) && (numbern!=0 || numberm!=0))
	{
		int soma = numbern + numberm;
		for(controle = 0 ; controle < 11 ; controle++)
		{
			vet[controle] = soma %10;
			soma /= 10;
		}
		for(controle = 10 ; controle >= 0 ; controle--){
			if(vet[controle] != 0){
				printf("%d",vet[controle]);
			}
		}
		printf("\n");
	}
}
