/*
PROBLEM:
1011 - Sphere

SUBMISSION:
2/5/18, 1:17:30 PM
*/

#include <stdio.h>

int main(){
    int r;
    double VOLUME;
    scanf("%d", &r);
    VOLUME = ((4 * 3.14159 * r * r * r) / 3);
    printf("VOLUME = %.3lf\n", VOLUME);
    return 0;
}
