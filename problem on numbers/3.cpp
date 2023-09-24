#include <iostream>
#include <math.h>
using namespace std;

int main(){


  int num;
  int temp=0;
  cin>>num;

  for (int i = 2; i < num; i++)
  {
    if (num%i==0)  //vha tak jao jab tak remainder zero na ajaye
    {
        temp=temp+1;
        break;
    }
  }
  if (temp==0)
  {
    cout<<" prime";
  }
  else
  {
    cout<<"not prime"; 
  }
  
    return 0;
}