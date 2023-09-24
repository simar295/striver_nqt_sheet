/*
HASHMAPS , frequency arrays 
make size of hash array = maximum limit of your inputs 
1,2,1,1,1,2,3,9 => here max limit will be 9.
*/

#include <bits/stdc++.h>
using namespace std ;

int main(){
 
   int n;
   cin >> n;
   vector<int> arr;
   int x;
   // 1 3 2 1 3  
   for (int i = 0; i < n; i++)
   {
      cin >> x;
      arr.push_back(x);
   }

/*    int hasharr[13]={0};
   
   for (int i = 0; i < n; i++)
   {
    // hasharr[1][3][2][1][3]+=1
      hasharr[arr[i]]+=1; //hash ki input number wali postion ka count bda do => harr[5]=1 , harr[5]=2
   } */

   map<int,int> mpp;
   for (int i = 0; i < n; i++)
   {
       mpp[arr[i]]+=1;
   }
   
   for (auto it:mpp)
   {
    cout<<it.first<<" appears "<<it.second<<" times"<<endl;
   }
   
/* 
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" appears "<<hasharr[i]<<" times"<<endl;
   } */
   
 /*   cout<<"enter number to be searched";
   int number;
  cin>>number;
  cout<<number<<" appears "<<hasharr[number]<<" times";
 */
    return 0;
}

