#include<bits/stdc++.h>

using namespace std;


int main() {

 int x = 2;
 bool isprime=false;
 
 for(int i=2 ; i<x;i++){
     if(x%i==0 ){
           break;
     }
     else{
         isprime=true;
     }
 }
 
 if(isprime==true){
     cout<<x<<" is prime";
 }
 else{
     cout<<x<<" is not prime";
 }
 
  return 0;
}
