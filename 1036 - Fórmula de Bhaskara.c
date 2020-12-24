#include <stdio.h>
#include <math.h>
int main(void) 
{
    double a, b ,c, elevado, raiz1, raiz2, r1, r2;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);
    elevado = pow(b,2);
    raiz1 = elevado - (4*a*c);
    raiz2 = sqrt(raiz1);
    r1 = ((-b+raiz2)/(2*a));
    r2 = ((-b-raiz2)/(2*a));
    if (raiz1<0)
    {
        printf ("Impossivel calcular\n");
    }
    else if (a<=0 || b<=0 || c<=0)
    {
        printf ("Impossivel calcular\n");
    }
    else
    {
        printf ("R1 = %.5f\n", r1);
        printf ("R2 = %.5f\n", r2);
    }
    return 0;
}
