#include<iostream>
using namespace std;
// IN BUBBLE SORT , WE PERFORM ROUNDS OF SWAPING THE WHOLE LOOP
// IN EACH ROUNND , A LOOP IS EXCECUTED WHICH SWAPS EVERY 2 ADJACENT ELEMENTS(i , i+1) 
// i.e every value of i and next of i , BASED ON ORDER .  
int main(){
 int arr[5]={2,5,3,1,4};
 for (int i = 0; i < 5-1; i++)  //1st loop = no of rounds 
 {                              //2nd loop = swap every 2 adjectent elements based on less condition,simple!
     for (int j = 0; j < 5-i-1 /*total - ith - 1 less , as dont compare last as its already sorted*/ ; j++) 
     {
        if (arr[j+1]<arr[j])
        {
            swap(arr[j],arr[j+1]);
        }      
     }
     
 }
 
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i];
  }
return 0;
}