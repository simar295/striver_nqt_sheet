#include<bits/stdc++.h>
/*
Find all Symmetric Pairs in the array of pairs
In this article, we will solve the problem: “Find all Symmetric Pairs in the array of pairs”

Problem Statement: Given an array of pairs, find all the symmetric pairs in the array.

*/
using namespace std;
int main() {
  int n = 5;
 
  int arr[][2] = {{1, 5}, {2, 3}, {4, 2}, {5, 1}, {2, 4}}; 
  cout << "The Symmetric Pairs are: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0]) {
        cout << "(" << arr[i][1] << " " << arr[i][0] << ")" << " ";
        break;
      }
    }
  }

}