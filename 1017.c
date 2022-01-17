#include <math.h>
#include <stdio.h>
int main() {
    int  vm, horaspercorridas;
    scanf("%i", &horaspercorridas);
    scanf("%i", &vm);
    printf("%.3f\n", vm*horaspercorridas / 12.0);
    return 0;
}
