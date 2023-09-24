/*
Remove Duplicates From an Unsorted Array
Problem Statement: Given an unsorted array, remove duplicates from the array.
*/

#include <bits/stdc++.h>
using namespace std;

class removeDuplicate
{

public:
    void duplicate(int arr[], int n)
    {

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(arr[i]) == mp.end())
            { // If the element is found, the iterator points to the position in the map
              // where the key is found otherwise, it points to mp.end() to indicate that
              //  the key is not found.
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
        }
    }
};
int main()
{

    int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34};
    int n = 9;

    removeDuplicate d1;
    d1.duplicate(arr, n);

    return 0;
}