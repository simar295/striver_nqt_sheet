#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    // finding length of arrays
    int len1 = mid - start + 1;
    int len2 = end - mid;
    // storing values
    int *first = new int[len1];
    int *second = new int[len2];
    // copying values
    int mainarrayindex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarrayindex];
        mainarrayindex++;
    }

    mainarrayindex = start;
    for (int i = mid + 1; i < len2; i++)
    {
        second[i] = arr[mainarrayindex];
        mainarrayindex++;
    }

    int index1 = 0;
    int index2 = 0;
    mainarrayindex = start;
    while (index1 < len1 && index2 < len2)
    {
        if (arr[index1] < arr[index2])
        {
            arr[mainarrayindex] = first[index1];
            mainarrayindex++;
            index1++;
        }
        else
        {
            arr[mainarrayindex] = second[index2];
            mainarrayindex++;
            index2++;
        }
    }
    while (index1 < len1)
    {
        arr[mainarrayindex] = first[index1];
        mainarrayindex++;
        index1++;
    }
    while (index2 < len2)
    {
        arr[mainarrayindex] = second[index2];
        mainarrayindex++;
        index2++;
    }

    delete[] first;
    delete[] second;
}
void mergesort(int *arr, int start, int end)
{

    int mid = (start + end) / 2;
    // checking base case
    if (start > end)
    {
        return;
    }

    // merge left part
    mergesort(arr, start, mid);
    // merge right part
    mergesort(arr, mid + 1, end);

    // finally calling merge
    merge(arr, start, end);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    mergesort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}