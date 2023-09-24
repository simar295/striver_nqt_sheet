/* TEACHES YOU HOW TO TRAVERSE WORDS BY WORDS
Find the largest word in a String
Problem: Given a String, find the largest word in the string.

Example 1:
Input: string s=”Google Doc”
Output: “Google”
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str = " ";
    getline(cin, str);

   int len = str.length();
       int i = 0, j = 0;
   int min_length = len, max_length = 0, max_start = 0;

       while (j <= len)
       {
              if (j < len && str[j] != ' ')
                     j++;

              else
              {
                     int curr_length = j - i;

                     if (curr_length > max_length)
                     {
                            max_length = curr_length;
                            max_start = i;
                     }
                     j++;
                     i = j;
              }
       }

       cout<<str.substr(max_start, max_length);
    


return 0;
}
