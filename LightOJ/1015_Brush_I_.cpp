#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int t, p, sum = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%c", &c);
        scanf("%d", &p);
        int arr[p];
        for(int j = 0; j < p; j++)
        {
            scanf("%d", &arr[j]);
            if(arr[j] > 0)
            {
                sum += arr[j];
            }
        }
        printf("Case %d: %d\n", i+1, sum);
        sum = 0;
    }
    return 0;
}
