#include <math.h>
#define dimensaomax 21
#include <stdio.h>

 int reftam = 0;
 int referencia(char *variavel) {
     
    if (!(variavel[reftam] == '\0' && reftam == 0))
	    while (variavel[++reftam] != '\0');
	return reftam;
}
int main() {
    char variavel[dimensaomax];
    scanf("%s", variavel);
    printf("palavr%s\n", (referencia(variavel) < 10? "inha" : "ao"));
    return 0;
}
