/*
PROBLEM:
1015 - Distance Between Two Points

SUBMISSION:
2/5/18, 1:39:19 PM
*/

#include <stdio.h>
#include <math.h>

int main(){
    double x1, y1, x2, y2, x, y, Distance;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    x = x2-x1;
    y=y2-y1;
    Distance = (sqrt((x*x)+(y*y)));
    printf("%.4lf\n", Distance);
    return 0;
}
