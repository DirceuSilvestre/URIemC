#include <stdio.h>
 
int main() {
    int N, H, M;
    scanf("%d", &N);
    M = N/60;
    N = N%60;
    H = 0;
    if(M>60){
        H = M/60;
        M = M%60;
    }
    printf("%d:%d:%d\n", H, M, N);
    return 0;
}
