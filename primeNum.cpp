#include<iostream>
#include<math.h>
using namespace std;

void prime(int num)
{   int count=0;
    for(int i=2; i<num;i++)
    {  if(num%i==0)
       count++;
    }  
    if(count==0 && num!=1 && num!=0)
    cout<<"Prime number";
    else
    cout<<"Not a prime number";
}

int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    prime(num);
    return 0;
}