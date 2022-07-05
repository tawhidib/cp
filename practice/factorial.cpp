#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int result = 1;
    for(int i = 1; i <=n; i++) {
        result = result * i;
    }

    return result;
}

int main () {
    int n;
    cin >> n;
    int result = factorial(n);

    cout << result << endl;

    return 0;
}
