/*
Maximum occurring character in a string
Example 1:
Input: str = “takeuforward”
Output: a
Given a string, return the character that occurs the maximum number of times in the string.
If the maximum occurrence of two or more characters is the same, return any one of them.

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str = " ";
    getline(cin, str);
    int max = 0;
    int ans = 0;

    int freq[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        
        if (freq[i] > max)
        {
            max=freq[i];
            ans = i;  
        }   
    }
     cout<<(char)(ans+'a');
    return 0;
}