/*
PROBLEM:
1012 - Area

SUBMISSION:
2/4/18, 3:28:30 PM
*/

#include <stdio.h>

int main(){
    double A, B, C, triangle, radius, trapezium, square, rectangle;
    scanf("%lf %lf %lf", &A, &B, &C);

    triangle = (0.5 * A * C);
    radius = (3.14159 * C * C);
    trapezium = (0.5 * C * ( A + B));
    square = (B * B);
    rectangle = (A * B);

    printf("TRIANGULO: %.3lf\n", triangle);
    printf("CIRCULO: %.3lf\n", radius);
    printf("TRAPEZIO: %.3lf\n", trapezium);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);
    return 0;
}
