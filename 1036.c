#include <math.h>
#include <stdio.h>
int main()
{
    double VARIAVELa, VARIAVELb, VARIAVELc, delta, x1, x2;
    scanf("%lf %lf %lf",&VARIAVELa, &VARIAVELb, &VARIAVELc);
   delta = ((VARIAVELb*VARIAVELb)-(4*VARIAVELa*VARIAVELc));
    if(VARIAVELa == 0 || delta < 0)
    {
        printf("Impossivel calcular\n");
    }
    else {
     x2 = ((-VARIAVELb - sqrt(delta)) / (2*VARIAVELa));
    x1 = ((-VARIAVELb + sqrt(delta)) / (2*VARIAVELa));
    printf("R1 = %.5lf\n", x1);
    printf("R2 = %.5lf\n", x2);
    }
    return 0;
}