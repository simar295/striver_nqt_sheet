// ADD UNIQUE ELEMENTS TO STARTING
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
  int i=0;
  int j=0;
  for ( j = 1; j < n; j++)
  {
    if (arr[i]!=arr[j])
    {
        i++; //cuz ele at 0 will remain same
        arr[i]=arr[j];
    }    
  }
  cout << "The array after removing duplicate elements is " << endl;
  for (int k = 0; k < i+1; k++) {
    cout << arr[k] << " ";
  }

  return 0;
}