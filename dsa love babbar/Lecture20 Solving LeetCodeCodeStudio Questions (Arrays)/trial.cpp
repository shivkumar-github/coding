#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m,
                                 int n) {
  int i1 = 0, i2 = 0, ansitr = 0;
  vector<int> ans;
  while (i1 < m && i2 < n) {
    if (arr1[i1] < arr2[i2]) {
      ans[ansitr++] = arr1[i1++];
    } else {
      ans[ansitr++] = arr2[i2++];
    }
  }
  while (i1 < m) {
    ans[ansitr++] = arr1[i1++];
  }
  while (i2 < n) {
    ans[ansitr++] = arr2[i2++];
  }
  for (int i = 0; i < arr1.size(); i++) {
    arr1[i] = ans[i];
  }
  return arr1;
}

printVec()

int main(){
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {4,5};

    return 0;
}