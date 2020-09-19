#include <bits/stdc++.h>
#include <math.h>

using namespace std;
long long int arr[15000];
int is_prime(long long int n);

int main()
{
    long long int n = 3, p;
    int test, k;
    arr[0] = 2;
    for(int i = 1; i < 15000; )
    {
        p = is_prime(n);
        if( p == 1)
        {
            arr[i] = n;
            n += 2;
            i++;
        }
        else
        {
            n += 2;
        }
        
    }
    
    scanf("%d", &test);
    for(int i = 0; i < test; i++)
    {
        scanf("%d", &k);
        printf("%d\n", arr[k-1]);
    }
    return 0;
}

int is_prime(long long int n)
{
    if(n < 2) return 0;
    long long int i, root;
    if(n == 2)
    {
        return 1;
    }
    else
    {
        root = sqrt(n);
        for(i = 2; i <= root; i++)
        {
            if(n % i == 0) return 0;
        }
    }
    return 1;
}