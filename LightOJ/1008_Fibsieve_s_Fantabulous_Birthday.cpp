#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    long long int s, r, c, root, mid;
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &s);
        root = sqrt(s);
        if(s == (root*root))
        {
            if(root % 2 == 0)
            {
                r = 1;
                c = root;
            }
            else
            {
                r = root;
                c = 1;
            }
            
        }
        else
        {

            mid = (((root*root) + 1) + ((root + 1)*(root + 1))) / 2;
            
            if(mid == s)
            {
                r = root + 1;
                c = root + 1;
            }
            else if(mid > s)
            {
                if(root % 2 == 1)
                {
                    c = s - (root * root);
                    r = root + 1;
                }
                else
                {
                    c = root + 1;
                    r = s - (root * root);
                }
            }
            else
            {
                if(root % 2 == 1)
                {
                    c = root + 1;
                    r = ((root + 1) * (root + 1)) - s + 1;
                }
                else
                {
                    r = root + 1;
                    c = ((root + 1) * (root + 1)) - s + 1;
                }
                
            }
        }
        printf("Case %d: %lld %lld\n",i+1, c, r);
    }
    return 0;
}
