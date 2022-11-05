#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "luffy is still joyboy";
    int word_size = 0;
    int counter = 0;
    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == 32) {
            if(counter > 0) {
                word_size = counter;
            }
            counter = 0;
        } else {
            ++counter; 
        }
    }

    if(counter > 0) {
        word_size = counter;
    }
    printf("%d\n", word_size);
    return 0;
}
