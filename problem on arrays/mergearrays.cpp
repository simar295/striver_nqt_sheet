#include<iostream>
using namespace std;

int main(){
 int arr1[]={1,3,5,7};
 int arr2[]={2,4,6,8};

 int arr3[8];
 int main=0;
 int a1 = 0;
 int a2 = 0;

 for (int i = 0; i < 8; i++)
 {
     if (arr1[a1]<arr2[a2])
    {
        arr3[main++]=arr1[a1++];
    }
    else{
        arr3[main++]=arr2[a2++];
    }
 }


 for (int i = 0; i < 8; i++)
 {
    cout<<arr3[i]<<" ";
 }
 
 

    return 0;
}