/*
PROBLEM: 1014 - Consumption
SUBMISSION:2/3/18, 11:34:41 AM
*/

#include <stdio.h>
 
int main() {
 
    int X;
    float Y, average;
    scanf("%d %f", &X, &Y);
    average = (X / Y);
    printf("%.3f km/l\n", average);
 
    return 0;
}