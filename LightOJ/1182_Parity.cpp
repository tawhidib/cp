#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, counter = 0;
    long long int n;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        while(n > 0)
        {
            if(n % 2 == 1) counter++;
            n = n / 2;
        }
        if(counter % 2 == 1)
        {
            printf("Case %d: odd\n", i + 1);
        } 
        else
        {
            printf("Case %d: even\n", i + 1);
        }
        counter = 0;
    }
    return 0;
}
