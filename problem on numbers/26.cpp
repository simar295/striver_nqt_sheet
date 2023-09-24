/*
Problem Statement: Check if the number is a Harshad(or Niven) number or not.

Example 1:
Input: 378
Output: Yes it is a Harshad number.
Explanation: 3+7+8=18. 378 is divisible by 18. Therefore 378 is a harshad number.

Example 2:
Input: 379
Output: No
 it is not a Harshad number.
Explanation: 3+7+9=19. 379 is not divisible by 19. Therefore 379 is a harshad number.

Intuition: If the sum of digits is divisible by the number then it is called Harshad number.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int temp = num;
    int sum = 0;

    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    if (temp % sum == 0)
    {
        cout << "it is a harshad number";
      
    }

    return 0;
}