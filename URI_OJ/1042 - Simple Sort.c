#include <stdio.h>

int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(x > y && x > z && y > z){
        printf("%d\n", z);
        printf("%d\n", y);
        printf("%d\n", x);
    }
    else if(x > z && x > y && z > y){
        printf("%d\n", y);
        printf("%d\n", z);
        printf("%d\n", x);
    }
    else if(y> x && y > z && x > z){
        printf("%d\n", z);
        printf("%d\n", x);
        printf("%d\n", y);
    }
    else if(y > z && y > x && z > x){
        printf("%d\n", x);
        printf("%d\n", z);
        printf("%d\n", y);
    }
    else if(z > x && z > y && y > x){
        printf("%d\n", x);
        printf("%d\n", y);
        printf("%d\n", z);
    }
    else{
        printf("%d\n", y);
        printf("%d\n", x);
        printf("%d\n", z);
    }
    printf("\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    return 0;
}
