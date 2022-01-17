#include <math.h>
#include <stdio.h>

int main() {
    double gasolina, deslocamento;
  
    scanf("%lf", &deslocamento);
    scanf("%lf", &gasolina);
    printf("%.3lf km/l\n", deslocamento / gasolina);
    
    return 0;
} 
