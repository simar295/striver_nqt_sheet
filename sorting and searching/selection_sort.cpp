//SELECTION SORT = SELECT ELEMENT FROM WHOLE ARRAY AND PUT IT IN RIGHT POSITION.    

#include<iostream>
using namespace std;
//FIND AND ASSIGN POSITINONS AND THEN SWAP ELEMENTS/    
int main(){
  int arr[5]={2,5,3,1,4};

  for (int i = 0; i < 5; i++)
  {
     // in selection sort , we select the minimun from array and swap it into the ith position , simple
     int min=i; // here , i is the minimum posiiton
     for (int j = i+1; j < 5; j++)
     {
        if (arr[j]<arr[min]) // here , we look for elements in these 2 positions
        {
            min=j;  // here , we searched for the minimum element in j loop and assigned its position as minimum.
        }
        // now our work to find minimum position is done , so exit this j loop and simply swap elements
        //arr[min] and arr[i] position;
     }
     int temp=arr[i];
     arr[i]=arr[min];
     arr[min]=temp;
  }
  


  
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i];
  }
  

    return 0;
}