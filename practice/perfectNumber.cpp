#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0;
    for(int i = 1; i <= 50000; i++) {
        for(int j = 1; j <= i/2; j++) {
            if(i % j == 0) {
                sum = sum + j;
            }
        }

        if(sum == i) {
            cout << i<< " ";
        }

        sum = 0;
    }

    cout << endl;
    return 0;
}
