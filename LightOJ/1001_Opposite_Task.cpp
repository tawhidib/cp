#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, b;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if(n < 10)
        {
            a = 0;
            b = n;
        }
        else
        {
            a = n - 10;
            b = n - a;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}
