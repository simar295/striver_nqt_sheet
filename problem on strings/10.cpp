/* Capitalize first and last character of each word of a string
Problem Statement: Given a string,write a program to Capitalize
the first and last character of each word of that string.
Input: String str = "take u forward is awesome"
Output: “TakE U ForwarD IS AwesomE”
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
char uppercase(char str)
{
    str = str - 'a' + 'A';

    return str;
}
int main()
{
    string str = " ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 || i == (str.length() - 1)) // Converting first and last index character to uppercase
        {
            str[i] = towupper(str[i]);
        }
        else if (str[i] == ' ') // Converting characters present before and after space to uppercase
        {
            str[i - 1] = towupper(str[i - 1]);
            str[i + 1] = towupper(str[i + 1]);
        }
    }
    cout << str;
    return 0;
}