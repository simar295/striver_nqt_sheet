/*
Reverse a given Array
Problem Statement: You are given an array. The task is to reverse the array and print it. 

Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.


*/
#include <iostream>
using namespace std;

int main(){

   int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    int p1=0;
    int p2=4;

    while (p1<p2)
    {
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    
    

    return 0;
}