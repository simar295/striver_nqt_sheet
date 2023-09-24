/*Find the smallest element in an array

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the smallest element in the array.
*/

#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int x;
    for (int i = 0; i < 5; i++)
    {  cin>>x;
        arr[i]=x;
    }
    int smallest=arr[0];
    for (int i = 0; i < 5; i++)
    {  
       
       if (arr[i+1]<smallest)
       {
        smallest=arr[i+1];
       }     
    }
    cout<<smallest;

    return 0;

}