#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double pi = 2 * acos(0.0);
    double r, circle_area, box_area;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%lf", &r);
        circle_area = pi * r * r;
        box_area = 4 * r * r;
        printf("Case %d: %.2lf\n", i + 1, box_area - circle_area);
    }

    return 0;
}
