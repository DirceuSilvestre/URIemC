#include <stdio.h>
 
int main() {
    int A1, B1, A2, B2;
    double C1, C2, X;
    scanf("%d", &A1);
    scanf("%d", &B1);
    scanf("%lf", &C1);
    scanf("%d", &A2);
    scanf("%d", &B2);
    scanf("%lf", &C2);
    X = (B1*C1)+(B2*C2);
    printf("VALOR A PAGAR: R$ %.2f\n", X);
    return 0;
}
