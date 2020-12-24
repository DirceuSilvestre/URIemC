#include <stdio.h>
 
int main() {
    int n100, n50, n20, n10, n5, n2, m1, m050, m025, m010, m005, m001, total, A;
    double entrada;
    scanf("%lf", &entrada);
    A = entrada;
    total= entrada;
    
    n100=total/100;
    total= total%100;
    n50= total/50;
    total= total%50;
    n20= total/20;
    total= total%20;
    n10= total/10;
    total= total%10;
    n5= total/5;
    total= total%5;
    n2= total/2;
    total= total%2;
    m1= total/1;
    total= total%1;
    
    total = entrada*100 - A*100;
    
    m050= total/50;
    total= total%50;
    m025= total/25;
    total= total%25;
    m010= total/10;
    total= total%10;
    m005= total/5;
    total= total%5;
    m001= total;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m050);
    printf("%d moeda(s) de R$ 0.25\n", m025);
    printf("%d moeda(s) de R$ 0.10\n", m010);
    printf("%d moeda(s) de R$ 0.05\n", m005);
    printf("%d moeda(s) de R$ 0.01\n", m001);
    return 0;
}
