/*
Problem Statement: Check if the number is an abundant number or not.

Example 1:
Input: 18
Output: Abundant Number
Explanation: Divisors of 18 are 1,2,3,6,9. 1+2+3+6+9=21, Since 21 is greater than 18, 18 is an abundant number.

Example 2:
Input: 21
Output: Not Abundant Number
Explanation:Divisors of 21 are 1,3,7. 1+3+7=11, Since 11 is smaller than 21, 11 is not an abundant number.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int num;
    cin>>num;
    int sum=0;
    
    for(int i=1 ; i<num ;i++){
        if (num%i==0)
        {
            sum+=i;
        }
    }
    if (sum>num)
    {
        cout<<"it is abundant number";
    }
    

    return 0;
}