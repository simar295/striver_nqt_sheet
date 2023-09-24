#include<iostream>
using namespace std;

int main(){
 int arr[5]={1,2,3,4,5};

 int x;
 cin>>x;
for (int i = 0; i < 5; i++)
{
    if (arr[i]==x)
    {
        cout<<"x found at "<<arr[i] ;
    }
    
}



    return 0;
}   