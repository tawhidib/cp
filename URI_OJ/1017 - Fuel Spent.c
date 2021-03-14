#include <stdio.h>

int main(){
    double t, s, f;
    scanf("%lf %lf", &t, &s);
    f = ((t*s)/12);
    printf("%.3lf\n", f);
    return 0;
}
