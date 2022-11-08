#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  vector <int> result;
  for(int i = 0; i < nums.size(); ++i) {
    for(int j = i + 1; j < nums.size(); ++j) {
      if(*(nums.begin() + i) + *(nums.begin() + j) == target) {
        result.push_back(i);
        result.push_back(j);
      }
    }
  }

  return result;
}

int main() {
  vector <int>nums{2,7,11,15};
  int target = 9;
  vector <int> result;
  for(int i = 0; i < nums.size(); ++i) {
    for(int j = i + 1; j < nums.size(); ++j) {
      if(*(nums.begin() + i) + *(nums.begin() + j) == target) {
          cout << i << j << endl;
        result.push_back(i);
        result.push_back(j);
      }
    }
  }
  return 0;
}
