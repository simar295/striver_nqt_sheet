
#include <iostream>
#include <math.h>
using namespace std;
int main(){
 int noofterms;
 cin>>noofterms;
 int firstterm;
 cin>>firstterm;
 int ratio;
 cin>>ratio;



 int formula = (pow(ratio,noofterms)-1)/(ratio-1);
 int final = firstterm*formula;


cout<<final;

    return 0;
}