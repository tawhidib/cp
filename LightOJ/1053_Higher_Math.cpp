#include <bits/stdc++.h>
using namespace std;

void checker(int i, long long int a, long long int b, long long int c);
int main()
{
    int t;
    long long int a, b, c, min, mid, max;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a > b && a > c)
        {
            max = a;
            min = b;
            mid = c;
        }
        else if(b > a && b > c)
        {
            max = b;
            min = a;
            mid = c;
        }
        else
        {
            max = c;
            min = a;
            mid = b;
        }
        
        checker(i, min, mid, max);
    }
    return 0;
}

void checker(int i, long long int a, long long int b, long long int c)
{
    long long int result = ((a*a) + (b*b)) - (c*c);
    if(result == 0)
    {
        printf("Case %d: yes\n", i + 1);
    }
    else
    {
        printf("Case %d: no\n", i + 1);
    }
    
}
