/* Find LCM of two numbers
Example 1:
Input: num1 = 4,num2 = 8
Output: 8
Example 2:
Input: num1 = 3,num2 = 6
Output: 6
///////////////////////////////////////////////////////////////////
lcm = a*b/gcd(a,b)
lcm=  least possible number formed after multiplying both
gcd=  check if i is divisible by both a and b.If yes store it in the answer.
gcd=  biggest number that can divide both;
///////////////////////////////////////////////////////////////////
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int a,b;
 cin>>a>>b;
 int temp;
  for (int i = 1; i < a || i<b; i++)
  { 
    if (a % i == 0 && b % i==0)
    {
        temp=i;
    }
    
  }
  
  int lcm=(a*b)/temp;
  cout<<lcm;


    return 0;
}