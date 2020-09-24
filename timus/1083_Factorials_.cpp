#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    unsigned long long int result = 1;
    char c;
    string s;

    scanf("%d", &n);
    scanf("%c", &c);
    cin >> s;

    result = n;

    l = s.length();

    if(n % l == 0)
    {
        while(n >= l)
        {
            n = n - l;
            if(n >= 1)
            {
                result = result * n;
            }
        }
    }
    else
    {
        while(n >= 1)
        {
            n = n - l;
            if(n >= 1)
            {
                result = result * n;
            }
        }
    }
    
    printf("\n%llu\n", result);

    return 0;
}