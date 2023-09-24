#include<iostream>
using namespace std;
//INSERTION SORT
/*
SHIFT ALL ELEMENTS BEFORE TILL REACH A SMALLER NO THAN THE ELEMENT. 
*/
int main(){
  int arr[5]={2,5,3,1,4};

 for (int i = 1 /*start + 1 */; i < 5; i++)
 {
    int currentelemnt=arr[i]; //storing element to push at position after loop
    int prevpos=i-1; // postion to compare the element with.

    //now lets make correct space available for our elemnt by shifting all
    // this while loop is all about prevpos elements shifting
    while (prevpos>=0 && arr[prevpos]>currentelemnt)
    {
        arr[prevpos+1]=arr[prevpos]; // shifted all previous elements 1 ahead
        prevpos--;
    }
    arr[prevpos+1]=currentelemnt; //now there is space available between prevpos and curnt element,therefore prev+1=crnt;
 }
 
 
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i];
  }
return 0;
}