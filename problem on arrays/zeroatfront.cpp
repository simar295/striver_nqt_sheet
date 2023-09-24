// put all non zeroes numbers at front 
// 1 0 2 3 2 0 0 4 5 1

#include<bits/stdc++.h>
using namespace std;

int main(){
 
 vector<int> arr;
  int n;
  cin>>n;
  int x;
 for (int  i = 0; i < n; i++)
 {
    cin>>x;
    arr.push_back(x);
 }
 // 1 0 2 3 2 0 0 4 5 1
 int i=arr[0];
 for (int  j = 1; j < n; j++)
 {
    if (arr[j]!=0)
    {
        swap(arr[i],arr[j]);
        i++;
    }
    
 }

 for (int i = 0; i < n; i++)
 {
    cout<<arr[i];
 }
 
 
  


    return 0;
}