/*
Replace elements by its rank in the array
Replace elements by its rank in the array

Problem Statement: Given an array of N integers, 
the task is to replace each element of the array by its rank in the array.

Example 1:
Input: 20 15 26 2 98 6
Output: 4 3 5 1 6 2
Explanation: When sorted,the array is 2,6,15,20,26,98. 
So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so…
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
 map<int,int>mpp;
  int drr[n]; //demo array
 int rank=1;
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
   
 }

 //creating demo array to store sorted ranks 

 for (int i = 0; i < n; i++)
 {
    drr[i]=arr[i];
 }
 sort(drr, drr + n); 

 // storing sorted drr in map
 for (int i = 0; i < n; i++)
 {
    mpp[drr[i]]=rank;
    rank++;
 }  
 
 
  for (int i = 0; i < n; i++) {
		cout << mpp[arr[i]] << " ";
	} 

    return 0;
}

// dry run in copy-HASHING CONCEPT -1th page!