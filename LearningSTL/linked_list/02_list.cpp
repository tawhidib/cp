#include<bits/stdc++.h>
using namespace std;

int main() {
  //creating the sorted list
   list<int> myList_1 = {1,2,4};
   list<int> myList_2 = {1,3,4};
   //using merge() function to merge the lists
   myList_2.merge(myList_1);
   cout <<"Lists after merging : ";
   for(auto i = myList_2.begin(); i != myList_2.end(); ++i){
      cout << *i << " ";
   }
   cout << "\n";
  return 0;
}