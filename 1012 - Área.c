#include <stdio.h>
 
int main() {
    double A, B, C, AA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    AA = (A*C)/2;
    printf("TRIANGULO: %.3f\n", AA);
    AA = 3.14159*(C*C);
    printf("CIRCULO: %.3f\n", AA);
    AA = ((A+B)*C)/2;
    printf("TRAPEZIO: %.3f\n", AA);
    AA = B*B;
    printf("QUADRADO: %.3f\n", AA);
    AA = A*B;
    printf("RETANGULO: %.3f\n", AA);
    return 0;
}
