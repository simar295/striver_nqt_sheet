/*
ANAGRAMS
test , esta
Approach: Sort both the string and compare
each and every letter of both strings. If all letters matched then, print true. Otherwise, print false.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str = " ";
    getline(cin, str);
    string str2 = " ";
    getline(cin, str2);

    sort(str.begin(), str.end());
    sort(str2.begin(), str2.end());
    bool isanagram = false;

    if (str.length() != str2.length())
    {
        cout << "not anagram";
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == str2[i])
            {
                isanagram = true;
            }
        }
    }
    if (isanagram) cout<<"it is anagram";
    {
        /* code */
    }
    

    return 0;
}