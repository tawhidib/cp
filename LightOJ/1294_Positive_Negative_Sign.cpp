#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    unsigned long long int n, m, m_part = 0, p_part = 0, double_of_m;
    for(int i = 0; i < t; i++)
    {
        scanf("%llu %llu", &n, &m);
        m_part = (m * (m + 1)) / 2;
        double_of_m = m * 2;
        p_part = (double_of_m * (double_of_m + 1)) / 2;
        printf("Case %d: %llu\n", i + 1, ((n/(m*2)) * (p_part - (m_part*2))));
        m_part = 0;
        p_part = 0;
    }

    return 0;
}