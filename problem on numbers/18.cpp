/*
To obtain the factorial of a number, it has to be multiplied by
all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) …
Example 1:
Input: X = 5
Output: 120
Explanation: 5! = 5*4*3*2*1
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int num;
    cin >> num;


    for (int i = num; i> 1; i--)
    {
       num=num*(i-1);
    }
        cout << num<<endl;

    return 0;
}
