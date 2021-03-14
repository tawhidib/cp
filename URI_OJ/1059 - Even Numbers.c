/*
PROBLEM:
1059 - Even Numbers

SUBMISSION:
2/3/18, 1:11:37 PM
*/

#include <stdio.h>
 
int main() {
 
    int x;
    for( x = 2; x <= 100; x = x + 2)
    {
        printf("%d\n", x);
    }
 
    return 0;
}