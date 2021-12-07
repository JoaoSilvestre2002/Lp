#include <stdio.h>

int main()
{
    double areacirculo, pi, raio;
    pi = 3.14159;
    scanf("%lf",&raio);
    areacirculo = (pi*(raio*raio));
    
    
    printf("A=%.4lf\n", areacirculo);

    return 0;
}