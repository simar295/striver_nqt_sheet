/*
Rotate array by K elements : Block Swap Algorithm
In this article we will learn a very popular algorithm for “Rotate array by K elements : Block Swap Algorithm”.

Problem Statement: Given an array of n size, rotate the array by k elements using the Block Swap Algorithm.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5} K=2
Output: {3,4,5,1,2}
Explanation: Rotate the array to right by 2 elements.

Example 2:
Input: N = 7, array[] = {1,2,3,4,5,6,7} K=3
Output: {4,5,6,7,1,2,3}
Explanation: Rotate the array to right by 3 elements.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int n;
    cout << "enter size";
    cin >> n;
    int k;
    cout << "enter k ";
    cin >> k;
    int x;
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    /*For example, if n is 5 and k is 7, k % n would be 2, which means you need to rotate 
    the array by 2 positions to achieve the same effect as rotating by 7 positions.*/

    if (k == 0 || (k %= nums.size()) == 0)
    {
        return -1;
    }

    reverse(nums.begin(), nums.end());       // reverse all
    reverse(nums.begin(), nums.begin() + k); // reverse before k
    reverse(nums.begin() + k, nums.end());   // reverse after k

    /*
     if(nums.size()%2==0 ){       //even case
            for(int i =0 ; i<k;i++){
            int temp=nums.back();
            nums.erase(nums.end()-1);
            nums.insert(nums.begin(), temp);
          }
        }
      if(nums.size()%2==1 ){        //odd case
            for(int i =0 ; i!=k;i++){
            int temp=nums.back();
            nums.erase(nums.end()-1);
            nums.insert(nums.begin(), temp);
          }
          }
         */

    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }

    return 0;
}

/*

class Solution {
public:
//For example, if n is 5 and k is 7, k % n would be 2, which means
 //you need to rotate the array by 2 positions to achieve the same effect as rotating by 7 positions.
    void rotate(vector<int>& nums, int k) {
  if (k == 0 || (k %= nums.size()) == 0 ){
  return ;
  }


  reverse(nums.begin(),nums.end());   //reverse all
  reverse(nums.begin(),nums.begin()+k); //reverse before k
  reverse(nums.begin()+k,nums.end()); //reverse after k
}
};

*/