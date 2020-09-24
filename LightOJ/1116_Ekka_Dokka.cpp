#include <bits/stdc++.h>
using namespace std;
unsigned long long int checker(unsigned long long int w);
int main()
{
    int t;
    unsigned long long int w, n = 2, m = 1;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%llu", &w);
        if(w % 2 == 1)
        {
            printf("Case %d: Impossible\n", i + 1);
        }
        else
        {
            m = checker(w);
            if(m != 0)
            {
                n = w / m;
                printf("Case %d: %llu %llu\n", i + 1, n, m);
            }
            else
            {
                printf("Case %d: Impossible\n", i + 1);
            }
            
        }
        
    }

    return 0;
}

unsigned long long int checker(unsigned long long int w)
{
    for(unsigned long long int i = 2; i <= w/2; i += 2)
    {
        if((w % i == 0) && ((w/i) % 2 == 1))
        {
            return i;
        }
    }

    return 0;
}