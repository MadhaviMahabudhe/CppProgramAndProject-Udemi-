#include<iostream>
#include<math.h>
using namespace std;

void fact(int a,int b,int c)
{ 
    cout<< (-b+sqrt(b*b-4*a*c))/2*a<<" ";
    cout<< (-b-sqrt(b*b-4*a*c))/2*a;
     
}

int main()
{
    int a, b, c;
    cout<<"Enter the value of a , b , c : ";
    cin>>a>>b>>c;
    cout<<"Factors are ";
    fact(a,b,c);
    return 0;
}