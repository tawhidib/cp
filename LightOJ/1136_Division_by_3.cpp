#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    unsigned long long int a, b, count = 0, difference;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%llu %llu", &a, &b);
        difference = b - a + 1;
        // printf("difference = %llu\n", difference);
        count = (difference / 3) * 2;
        // printf("Count = %llu\n", count);
        if(difference % 3 == 0)
        {
            printf("Case %d: %llu\n", i + 1, count);
        }
        else
        {
            if(difference % 3 == 1)
            {
                if(((b*(b+1))/2)%3 == 0)
                {
                    count = count + 1;
                }
            }
            else
            {
                if((b*(b+1) / 2) % 3 ==0)
                {
                    count++;
                }
                b = b - 1;
                if((b*(b+1) / 2) % 3 ==0)
                {
                    count++;
                }
            }
            printf("Case %d: %llu\n", i + 1, count);
        }
        count = 0;
    }
    return 0;
}