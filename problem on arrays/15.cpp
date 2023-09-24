/*
Find all NON repeating elements in an array

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

for(auto x :mpp){
   if (x.second == 1)
   {
     cout<<x.first ;
   }
   
}

    return 0;
}
