#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> arr;
   int x;

   for (int i = 0; i < n; i++)
   {
      cin >> x;
      arr.push_back(x);
   }
     cout<<"insert at beginnging";
     int y;
     cin>> y;
     
     arr.insert(arr.begin(),y);
for (int i = 0; i < n+1; i++)
   {
      cout<<arr[i];
   }
   
  
return 0;
}