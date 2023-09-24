#include <iostream>
using namespace std;
// IN BUBBLE SORT , TAKE FIRST TWO ELEMENTS AND SWAP SWAP SWAP

int main()
{
    int arr[5] = {1, 5, 4, 2, 3};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}