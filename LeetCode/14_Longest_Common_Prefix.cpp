#include <bits/stdc++.h>
using namespace std;

string prefixFinder (string str1, string str2) {
    string s = "";
    int i = 0;
    while (str1[i] == str2[i] && str1.length() > 0 && str2.length() > 0)
    {
        s = s + str1[i];
        ++i;
    }
    return s;
}
string longestCommonPrefix(vector<string>& strs) {
    vector<char> prefix;
    string s = "";
    if(strs.size() == 1){ 
        return *(strs.begin());
    }
    int i = 2;
    s = prefixFinder(*(strs.begin()), *(strs.begin() + 1));
    while (s.length() > 0 && strs.size() > i)
    {
        s = prefixFinder(s, *(strs.begin() + i));
        ++i;
    }
    
    return s;
}

int main(){
    vector<string> strs{"",""};
    string s = longestCommonPrefix(strs);
    cout << s << endl;
    return 0;
}
