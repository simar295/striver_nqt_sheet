/*


*/

#include <iostream>
#include <math.h>
using namespace std;


int main(){

 int num;
 cin>>num;
 int reversed=0;

 while (num>0)
 {
    reversed=reversed*10+num%10; //only one line logic
    num=num/10; //just checking while condition
 }
 if (reversed==num)
 {
    cout<<"it is palindrome";
 }
 else
 {
    cout<<"not a plindrome";
 }
 


    return 0;
}
