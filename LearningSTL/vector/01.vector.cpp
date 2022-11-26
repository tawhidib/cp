#include<bits/stdc++.h>
using namespace std;

int main() {
  //vector declaration
  // vector<datatype> name_of_vector;
  vector<int>v;
  // insert values to vector
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  //print vector values..............

  //first way ...
  printf("%d\n\n\n", v[0]);
  
  //second way ...
  printf("second way of printing vector by using vector.at(index)\n\n");
  for(int i = 0; i < v.size(); ++i) {
    printf("%d\n", v.at(i));
  }

  // how to get the size of a vector
  printf("\n\n\nSize of the the vector is find by vector.size() function\nOur vector size is = %lu\n\n\n", v.size());

  // how to print first element of a vector
  printf("print first element value by vector.front() function... %d\n\n\n", v.front());


  // how to print last element of a vector
  printf("print last element value by vector.back() function... %d\n\n\n", v.back());


  // how to clear a vector
  printf("we can clear a vector by using vector.clear() function.\n\n\n");
  // v.clear();
  // cout << v.size() << endl;

  // how to check a vector is empty or not
  printf("we can check a vector is empty or not by using vector.empty() function.\n\n\n");
  // cout << v.empty() << endl;

  // remove last element of a vector by vector.pop_back();
  v.erase(v.begin() + 2, v.begin() + v.size());

for(int i = 0; i < v.size(); ++i) {
    printf("%d\n", v.at(i));
  }

  return 0;
}