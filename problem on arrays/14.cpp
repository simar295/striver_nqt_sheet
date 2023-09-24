/*
Find all repeating elements in an array
Problem Statement: Find all the repeating elements present in an array.

Example 1:
Input:
Arr[] = [1,1,2,3,4,4,5,2]
Output:
 1,2,4
Explanation:
 1,2 and 4 are the elements which are occurring more than once.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int x;
  int arr[n];
  map<int,int>  mpp;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    arr[i]=x;
    mpp[arr[i]]++;  
  }
// IF WANT TO PRINT ALL CHARACTER FREQUENCIES  
 for (auto x : mpp)  { // OR   for (auto it = map.begin(); it != map.end(); it++)
 if (x.second>1)
 {
        cout << x.first << " " << x.second << endl;
    /* code */
 }
 
 }     
 
/* for (int i = 0; i < n; i++)
{
    if (arr[i]!=arr[i+1]) //FOR PRINTING UNIQUE ELEMENTS
    {
        cout<<arr[i]<<"appears "<< mpp[arr[i]]<<" times"<<endl;
    }
    
} */


    return 0;
}
