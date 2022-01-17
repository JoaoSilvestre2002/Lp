#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    	char variavel;
    	int rows, line, referencia = 0;
	double x[12][12], resposta = 0;
	
	

	scanf("%c", &variavel); 

	for(line = 0; line < 12; line++)
		for(rows = 0; rows < 12; rows++) 
			{
				scanf("%lf", &x[line][rows]);

				if (line>rows)
				{
					resposta = resposta + x[line][rows];
					referencia++;
				}
			}

	if (variavel == 'M')
	{
    	resposta = resposta / referencia; 
    	printf("%.1lf\n", resposta);
	}

    if (variavel == 'S')
    {
    	printf("%.1lf\n", resposta);
    }

	return 0;
}
