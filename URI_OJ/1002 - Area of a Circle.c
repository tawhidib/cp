/*
PROBLEM:
1002 - Area of a Circle

SUBMISSION:
2/3/18, 2:28:03 PM
*/

#include <stdio.h>
 
int main() {
 
    double A, R;
    scanf("%lf", &R);
    A = R * R * 3.14159;
    printf("A=%.4lf\n", A);
 
    return 0;
}