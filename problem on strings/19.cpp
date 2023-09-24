/*Problem Statement: Given two strings, write a program to remove characters
from the first string which are present in the second string.

Example 1:
Input: String str1 = “abcdef”
       String str2 = “cefz”
Output: abd
Explanation: The common characters in both strings are c, e, f.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str1 = " ";
    getline(cin, str1);
    string str2 = " ";
    getline(cin, str2);
    string result = "";

    /*
    String str1 = “abcdef”
    String str2 = “cefz”
    */
    for (int i = 0; i < str1.length(); i++)
    {
    bool ispresent = false;
        for (int j = 0; j < str2.length(); j++)
        {
            if (str1[i] == str2[j])
            {
                ispresent = true;
            }
        }
        if (ispresent == false)
        {
            result.push_back(str1[i]);

        }
    }
    cout << result;


    return 0;
}
