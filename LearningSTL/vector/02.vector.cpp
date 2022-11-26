#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int>v{10,20,30,40};
  for(int i = 0; i < v.size(); ++i) 
  {
    cout << v[i] << " ";
  }

  cout << endl << endl << endl;

  // how to insert a value at any position by vector.insert() fuction 

  // vector.insert(kon point, koto gula, value ki hobe) ->
  // jodi 3ta value hoy ei fuction e tahole ei ei parameter lagbe 
  v.insert(v.begin() + 1, 15);

  for(int i = 0; i < v.size(); ++i) 
  {
    cout << v[i] << " ";
  }
  cout << endl << endl << endl;

  return 0;
}