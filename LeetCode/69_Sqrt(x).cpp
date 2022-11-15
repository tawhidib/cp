#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
  for(int i = 0; i <= x/2; ++i) {
    if((i * i) >= x) {
      return i;
    }
  }
}

int main () {
  int res = mySqrt(4);
  cout << res << endl;
  return 0;
}