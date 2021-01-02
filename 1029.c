#include <stdio.h> 

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
    for (int i = 0; i < S; ++i)
    {
        res = fib(a[i]);
        printf("fib(%d) = %d calls = %d\n", a[i],res, contador-1);
        contador=0;
    }
    return 0;
}
