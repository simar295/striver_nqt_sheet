/*
add fractions
3/4+1+7=25+28
*/
#include <iostream>
#include <math.h>
using namespace std;

int lcm(int a, int b)
{

    int gcd;
    int lcmm;

    for (int i = 1; i < a || i < b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    lcmm = (a * b) / gcd;
    return lcmm;
}

int main()
{
    int num1, deno1, num2, deno2;
    cin >> num1 >> deno1 >> num2 >> deno2;

    int deno = lcm(deno1, deno2);

    int nume = (deno / deno1) * num1 + (deno / deno2) * num2;
    cout << nume;
    cout << deno;

    ;
    return 0;
}