/*Find the Largest element in an array

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array.

*/
#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
       cin>>arr[i];
    }

    int largest=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i+1]>largest)
        {
            largest=arr[i+1];
        }
    }
    cout<<largest;   

    return 0;
}
