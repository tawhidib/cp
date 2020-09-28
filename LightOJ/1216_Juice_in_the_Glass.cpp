#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double pi = 2*acos(0.0);
    double r1, r2, p, h, r3, v;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%lf %lf %lf %lf", &r1, &r2, &h, &p);
        r3 = (((r1 - r2)*p)/h) + r2;
        v = (pi*p) * (r2*r2 + r3*r3 + (r2 * r3)) / 3.0;
        printf("Case %d: %.6lf\n", i + 1, v);
    }
    return 0;
}