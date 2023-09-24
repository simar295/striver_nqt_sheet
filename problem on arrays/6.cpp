/*Rearrange array in increasing-decreasing order
Problem Statement: Rearrange the array such that the first 
half is arranged in increasing order, and the second half is arranged in decreasing order
Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 
 vector<int> arr;
 int n;
 cin>>n;
 int x;

 for (int i = 0; i < n; i++)
 {
    cin>>x;
    arr.push_back(x);
 }

 sort(arr.begin(),arr.end());

  
for (int i = 0; i <n/2; i++)
 {
    cout<<arr[i];
 }
 for (int i = n-1 ; i >= n/2; i--)
 {
    cout<<arr[i];
 } 
 

 

    return 0;
}