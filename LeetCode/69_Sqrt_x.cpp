#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
    long int root = x;
    while(root * root > x ) {
        root = (root + (x / root)) /2;
    }

    return root;
}


int main(){
    int ans = mySqrt(117);
    cout << ans << endl;
    return 0;
}