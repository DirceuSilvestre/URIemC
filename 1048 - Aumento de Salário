#include <stdio.h> 

int main(void) 
{
    double salario, aumento;
    char c='%';
    scanf ("%lf", &salario);
    if (0.00<salario && salario<=400.00)
    {
        aumento = (salario/100)*15;
        salario = salario + aumento;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 15 %c\n", c);
    }
    else if (400.01<=salario && salario<=800.00)
    {
        aumento = (salario/100)*12;
        salario = salario + aumento;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 12 %c\n", c);
    }
    else if (800.01<=salario && salario<=1200.00)
    {
        aumento = (salario/100)*10;
        salario = salario + aumento;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 10 %c\n", c);
    }
    else if (1200.01<=salario && salario<=2000.00)
    {
        aumento = (salario/100)*7;
        salario = salario + aumento;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 7 %c\n", c);
    }
    else if (2000.01<=salario)
    {
        aumento = (salario/100)*4;
        salario = salario + aumento;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 4 %c\n", c);
    }
    return 0;
}
