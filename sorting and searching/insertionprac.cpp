#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {2, 5, 3, 1, 4};

    for (int i = 1; i < 5; i++) //start from 1 
    {
        int current = arr[i] ; //1
        int prev = i-1;       // 0

        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev--; 
        }
        arr[prev + 1] = current;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<< " ";
    }

    return 0;
}