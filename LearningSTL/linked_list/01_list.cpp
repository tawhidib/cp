#include <bits/stdc++.h>
using namespace std;

void show_list(list<int> l) {
  list<int>::iterator it;
  for(it = l.begin(); it != l.end(); ++it) {
    cout << *it << "\t";
  }
  cout << "\n";
}

int main () {
  list<int> list1, list2;
  for(int i = 1; i <= 10; ++i) {
    list1.push_back(i);
    list2.push_front(i);
  }

  cout << "\nList 1 is : ";
  show_list(list1);

  cout << "\nList 2 is : ";
  show_list(list2);

  cout << "Size of list 1 = " << list1.size() << "\n";

  list1.pop_front();
  cout << "\nAfter using pop_front() List 1 is : ";
  show_list(list1);

  list2.pop_back();
  cout << "\nAfter using pop_back() List 2 is : ";
  show_list(list2);

  list1.reverse();
  cout << "\nAfter using reverse() List 1 is : ";
  show_list(list1);

  list2.sort();
  cout << "\nAfter sorting List 2 is : ";
  show_list(list2);
  return 0;
}