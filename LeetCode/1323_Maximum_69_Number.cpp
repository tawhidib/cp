#include <bits/stdc++.h>
using namespace std;

int power(int n) {
  int output = 1;

  if(n > 0) {
    for(int i = 0; i < n; ++i) {
      output = output * 10;
    }
  }
  return output;
}


int maximum69Number (int num) {
    stack<int> digits;
    int res = 0;
    while(num > 0) {
      digits.push(num % 10);
      num = num / 10;
    }

    int digits_count = digits.size();
    int at_one = 0;

    while (!digits.empty()) {
        if(digits.top() == 6 && at_one == 0)  {
              res = res + (9 * power(--digits_count));
            ++at_one;

        } else {
            res = res + (digits.top() * power(--digits_count));
        }
        digits.pop();
    }

    return res;
}

int main() {
  int num = 9999;
  int res = maximum69Number(num);
  cout << res << endl;
  return 0;
}
