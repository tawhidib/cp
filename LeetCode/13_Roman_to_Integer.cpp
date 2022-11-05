#include <bits/stdc++.h>
using namespace std;

#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

int romanToInt(string s) {
  vector<int> num(1, -1);
  int current = 0;
  int sum = 0;
  for(int i = s.length() - 1; i >= 0; --i) {
    if(s[i] == 73) {
      current = 1; // I = 1;
    } else if(s[i] == 86){
      current = 5; // V = 5;
    } else if(s[i] == 88) {
      current = 10; // X = 10;
    }else if(s[i] == 76) {
      current = 50; // L = 5;
    }else if(s[i] == 67) {
      current = 100; // C = 5;
    }else if(s[i] == 68) {
      current = 500; // D = 5;
    }else if(s[i] == 77) {
      current = 1000; // M = 5;
    }
    num.push_back(current);
  }

  for(int i = 1; i < num.size(); ++i) {
    if(*(num.begin() + i - 1) >  *(num.begin() + i)) {
      sum -= *(num.begin() + i);
    } else {
      sum += *(num.begin() + i);
    }
  }

  return sum;
}

int main() {

  string s = "MCMXCIV";
  int res = romanToInt(s);
  printf("result = %d\n", res);
}