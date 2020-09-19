#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, p, l, total_travel;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d", &p, &l);
        if(p < l)
        {
            total_travel = l;
        }
        else
        {
            total_travel = p + p - l;
        }
        printf("Case %d: %d\n", i+1, (total_travel*4) + 19);
    }

    return 0;
}
