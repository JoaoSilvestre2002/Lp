#include <math.h>
#include <stdio.h>

int main() {
    double distanciaateaborda;
    scanf("%lf", &distanciaateaborda);
    printf("VOLUME = %.3lf\n", 3.14159 * 4/3 * pow(distanciaateaborda, 3.0));
    return 0;
}
