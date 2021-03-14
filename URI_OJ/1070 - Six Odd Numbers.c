#include <stdio.h>

int main(){
    int X, N;
    scanf("%d", &X);
    if(X % 2 == 0){
        N = X + 1;
        for(N; N < (X + 12); N +=2){
            printf("%d\n", N);
        }
    }
    else{
        N = X;
        for(N; N < (X + 11); N +=2){
            printf("%d\n", N);
        }
    }
    return 0;
}
