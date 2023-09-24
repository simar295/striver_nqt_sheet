// SELECTION SORT = SELECT ELEMENT FROM WHOLE ARRAY AND PUT IT IN RIGHT POSITION.

#include <iostream>
using namespace std;
// FIND AND ASSIGN POSITINONS AND THEN SWAP ELEMENTS/
int main()
{
    int arr[5] = {1, 5, 4, 2, 3};

    for (int i = 0; i < 5; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++) // j 1 2 3 4
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        {
            swap(arr[i], arr[min]);
            /* code */
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}