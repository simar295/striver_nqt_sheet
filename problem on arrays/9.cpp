/*
Average of all the elements in the array
Problem Statement: Given an array, we have to find the average of all the elements in the array.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 3
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    int x;
    int count=0;

    for (int i = 0; i < n; i++)
    {
        cin>>x;
        count=count+x;
        arr.push_back(x);
        
    }
    cout<<count/n;



    return 0;
}
