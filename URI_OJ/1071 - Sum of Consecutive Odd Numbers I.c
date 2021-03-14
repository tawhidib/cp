#include <stdio.h>

int main(){
    int X, Y, N, sum = 0;
    scanf("%d %d", &X, &Y);
    if(X > Y){
        for(N = Y + 1; N < X; N++){
            if(N % 2 == 1 || N % 2 == -1){
                sum = sum + N;
            }
        }
        printf("%d\n", sum);
    }
    else if(X == Y){
        printf("%d\n", sum);
    }
    else{
        for(N = X + 1; N < Y; N++){
            if(N % 2 == 1 || N % 2 == -1){
                sum = sum + N;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
