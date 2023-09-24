#include<iostream>
using namespace std;

/*
start      mid       end
[1]    2   [3]   4   [5] 
*/

int main(){
 int arr[5]={1,2,3,4,5};

 int start=0;
 int end=5; //n-1 , simple

 int foundat;
 int mid = start + (end - start) / 2;
 int x;
 cin>>x;
 
 while (start<=end)
 {
    if (arr[mid]==x)
    {
        foundat=mid;
        break;
 
    }
     if (x<arr[mid])
    {
        end=arr[mid]-1;
    }
    if (x>arr[mid])
    {
        start=arr[mid]+1;
    }
    mid = start + (end - start) / 2;
 
 }
    cout<<foundat;



return 0;
}