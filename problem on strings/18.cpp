/*
Print all the duplicates in the string

Problem Statement: Given a string of characters from a to z.
 Print the duplicate characters(which are occurring more than once) in the given string with their occurrences count.
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str = " ";
    getline(cin, str);

    int freq[26]={0};

    for (int i = 0; i < 26; i++)
    {
        freq[str[i]-'a']++;
        if (freq[i]>1)
        {
           cout<<(char)(i+'a')<<" "<<freq[i]<<endl;
        }    
    }
    
return 0;
}