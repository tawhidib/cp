#include<bits/stdc++.h>
using namespace std;
/*
  40 = (
  41 = )
  123 = {
  125 = }
  91 = [
  93 = ]
*/
bool isValid(string s) {
  if(s.length() % 2 == 1) {
    return false;
  }
  stack<char> stk;
  for(int i = 0; i < s.length(); ++i) {
    if(s[i] == 91 || s[i] == 123 || s[i] == 40) {
      stk.push(s[i]);
    }
    else {
      if(stk.size() == 0) {
        return false;
      }
      else if(s[i] == 41) {
        if(stk.top() == 40) {
          stk.pop();
          continue;
        }
        else {
          return false;
        }
      }
      else if(s[i] == 125) {
        if(stk.top() == 123) {
          stk.pop();
          continue;
        }
        else {
          return false;
        }
      }
      else if(s[i] == 93) {
        if(stk.top() == 91) {
          stk.pop();
          continue;
        }
        else {
          return false;
        }
      }
    }
  }

  if(stk.size() == 0) {
    return true;
  }
  return false;
}

int main(){
    string s = "){";
    bool res;
    res = isValid(s);
    printf("%d", res);
    return 0;
}
