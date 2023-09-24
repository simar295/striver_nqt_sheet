/*
Find Median of the given Array
Problem Statement: Given an unsorted array, find the median of the given array.

Example 1:
Input: [2,4,1,3,5]
Output: 3

Example 2:
Input: [2,5,1,7]
Output: 3.5
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 vector<int>arr;
 int x;

 for ( int i = 0; i < n; i++)
 {
    cin>>x;
    arr.push_back(x);
 }

 sort(arr.begin(),arr.end());

if (arr.size()%2==1) //odd case 1 2 3 [4] 5 6 7 
{
    int pos=(n+1)/2;
    cout<<arr[pos-1];
}
if (arr.size()%2==0)  //even case 1 2 [3 4] 5 6
{
       
        int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<(double)(arr[ind1]+arr[ind2])/2;
}


    return 0;
}