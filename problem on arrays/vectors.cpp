/*Rearrange array in increasing-decreasing order
Problem Statement: Rearrange the array such that the first 
half is arranged in increasing order, and the second half is arranged in decreasing order
Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

//begin and end are iterators 
//front and back are integers/pointers

  vector<int> arr;
  int x;
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    cin>>x;
    arr.push_back(x); //adding elements at last
  }

  cout<<*arr.begin(); // '*' used to access value at this location
  
   sort(arr.begin(),arr.end());
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i];
  } 
}


/*

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int temp;

        for(int i =0 ; i<k ;i++){
           if(nums.size()%2==0 && k!=0){
             int temp=nums.back();
             nums.erase(nums.end()-1);
             nums.insert(nums.begin(), temp);
           }
        }

        for(int i =0 ; i!=k;i++){
        if(nums.size()%2==1 && k!=0){
        int temp=nums.back();
        nums.erase(nums.end()-1);
        nums.insert(nums.begin(), temp);
           }
       }
    }
};
*/