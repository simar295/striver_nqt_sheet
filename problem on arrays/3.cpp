/*
Find Second Smallest and Second Largest Element in an array
Problem Statement: Given an array, find the second smallest and
second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
        Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
   int slarge = arr[0];
    int large = arr[1];
    for (int i = 2; i < 5; i++)
    {

        if (arr[i] > large)
        {
            slarge = large;
            large = arr[i];
        }
          else if (arr[i] > slarge && arr[i] != large) 
        {
            slarge = arr[i];
        }
    }
    cout << slarge;

    return 0;
}