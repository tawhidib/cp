/*
PROBLEM:
1065 - Even Between five Numbers

SUBMISSION:
2/6/18, 12:55:25 PM
*/

#include <stdio.h>

int main(){
    int a, b, c, d, e, n = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a % 2 == 0){
        n = n + 1;
    }
    else{
        n = n;
    }
    if(b % 2 == 0){
        n = n + 1;
    }
    else{
        n = n;
    }
    if(c % 2 == 0){
        n = n + 1;
    }
    else{
        n = n;
    }
    if(d % 2 == 0){
        n = n + 1;
    }
    else{
        n = n;
    }
    if(e % 2 == 0){
        n = n + 1;
    }
    else{
        n = n;
    }
    printf("%d valores pares\n", n);
    return 0;
}
