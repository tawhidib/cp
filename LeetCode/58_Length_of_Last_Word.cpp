#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "hello world";
    int last_space = 0;
    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == 32) {
            last_space = i;
        }
    }

    printf("%d\n", s.length() - ++last_space);
    return 0;
}
