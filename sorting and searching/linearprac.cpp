#include<iostream>
using namespace std;

int main(){
    int x;
    bool isfound=false;
    cin>>x;
   int arr[5]={1,8,6,9,7};
   //applying linear search

   for (int i = 0; i < 5; i++)
   {
     if (/* condition */arr[i]==x){
      isfound=true;
        /* code */
     }
     
      
   }
   if (isfound==true)
   {
      cout<<"elemnt found";
    /* code */
   }
   


    return 0;
}