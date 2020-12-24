#include <stdio.h>
 
int main() {
 
    int a, i;
    scanf("%d", &a);
    if((a % 2) == 1)
    {
        for(i = 0; i < 6; i++)
        {
            printf("%d\n", a);
            a += 2;
        }
    }
    else
    {
        a += 1;
        for(i = 0; i < 6; i++)
        {
            printf("%d\n", a);
            a += 2;
        }
    }
    return 0;
}
