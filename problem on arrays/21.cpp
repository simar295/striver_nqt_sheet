#include <iostream>
 
using namespace std;
int findEquilibriumIdx(int nums[], int n) {
  int totalSum = 0;
  for (int i = 0; i < n; i++) {
    totalSum += nums[i];
  }
  int leftSum = 0, rightSum = totalSum;
  for (int i = 0; i < n; i++) {
    rightSum -= nums[i];
    if (leftSum == rightSum) {
      return i;
    }
    leftSum += nums[i];
  }
  return -1;
}
int main() {
  int n = 5; //L            R
  int arr[] = {2, 3, -1, 8, 4};
  int equilibriumidx = findEquilibriumIdx(arr, n);
  cout << equilibriumidx << endl;
  return 0;
}

//DRY RUN IN COPY HASHING-1TH index;
/*
left=0      right=total
left=0+ith   right=total-i
unil become same , print index i;
*/