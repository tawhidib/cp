#include <stdio.h>

int main(){
    int X, odd;
    scanf("%d", &X);
    for(odd = 1; odd <= X; odd = odd + 2){
        printf("%d\n", odd);
    }
    return 0;
}
