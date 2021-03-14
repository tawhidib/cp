/*
PROBLEM:
1044 - Multiples

SUBMISSION:
2/8/18, 1:02:27 AM
*/

#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    if ( B > A){
        if( B % A == 0){
            printf("Sao Multiplos\n");
        }
        else{
            printf("Nao sao Multiplos\n");
        }
    }
    else{
        if( A % B == 0){
            printf("Sao Multiplos\n");
        }
        else{
            printf("Nao sao Multiplos\n");
        }
    }

    return 0;
}
