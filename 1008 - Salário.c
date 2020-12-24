#include <stdio.h>

int main () {
	int A, B;
	double C, D;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%lf", &C);
	D = B*C;
	printf("NUMBER = %d\n", A);
	printf("SALARY = U$ %.2f\n", D);
	return 0;
}
