#include<iostream>
#include<math.h>
using namespace std;

float Roots(int a,int b,int c)
{
    int delta=b*b-4*a*c;
    if(delta>0)
    cout<<"roots are real and unequal";
    else if(delta<0)
    cout<<"roots are imaginary";
    else if(delta==0)
    cout<<"roots are real and equal";
return 0;
}
int main()
{
    int a,b,c;
    cout<<"Enter the number of a ,b, c:"<<endl;
    cin>>a>>b>>c;
    Roots(a,b,c);
return 0;
}