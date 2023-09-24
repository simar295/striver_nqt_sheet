#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2,3,4,5};
    int x;
    cin >> x;
    int start = 0;
    int end = 5-1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (x == arr[mid]) // 6 6 , position mid=2
        {
            cout << "elemnt found at " << mid;
            break;
        }
        if (arr[mid]< x)
        {
            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
    }
    return 0;
}