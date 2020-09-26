#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ax, ay, bx, by, cx, cy, dx, dy, t, area;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
        dx = cx - (bx - ax);
        dy = ay + (cy - by);
        area = (ax*by + bx*cy + cx*dy + dx*ay) - (ay*bx + by*cx + cy*dx + dy*ax);
        if(area < 0)
        {
            area = area * (-1);
        }
        printf("Case %d: %d %d %d\n", i + 1, dx, dy, area/2);
    }

    return 0;
}