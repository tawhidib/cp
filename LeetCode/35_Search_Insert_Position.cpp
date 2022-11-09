#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
     int i = 0;
     while ( i < nums.size()) {
      if(*(nums.begin() + i) >= target) {
        break;
      }
      ++i;
     }
     return i;
}

int main(){
  vector<int> nums{1,3,5,6};
  int target = 5;
  int res = searchInsert(nums, target);
  cout << res << endl;
  return 0;
}
