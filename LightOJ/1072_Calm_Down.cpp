#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    double pi = 2 * acos(0.0);

    for(int i = 0; i < t; i++)
    {
        double R, n, r;
        scanf("%lf %lf", &R, &n);
        r = (R*sin(pi/n)) / (1+sin(pi/n));
        printf("Case %d: %lf\n", i + 1, r);
    }
    return 0;
}
