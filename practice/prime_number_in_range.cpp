#include <bits/stdc++.h>
using namespace std;
bool check_prime(int n) {
    if(n == 1) {
        return false;
    }
    for(int i = 2; i<=sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int s, e;
    cout << "Input number for starting range: " ;
    cin >> s;
    cout << "Input number for ending range: " ;
    cin >> e;

    cout << "The prime numbers between " << s << " and " << e << " are:" << endl;

    for(int i = s; i <= e; i++) {
        if(check_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
