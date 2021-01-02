//Só funciona em C99 no URI, pois fala algo sobre não aceitar o for no início quando tenta compilar em C no URI

#include <stdio.h> 
#include <stdlib.h>

int contador;

int fib(int v)
{
    contador++;
    if (v<2)
    {
        return v;
    }
    else
    {
        return (fib(v-1)+fib(v-2));
    }
}

int main(int argc, char const *argv[])
{
    int S, res;
    scanf("%d", &S);
    int a[S];
    for (int i = 0; i < S; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < S; ++j)
    {
        res = fib(a[j]);
        printf("fib(%d) = %d calls = %d\n", a[j],res, contador-1);
        contador=0;
    }
    return 0;
}
