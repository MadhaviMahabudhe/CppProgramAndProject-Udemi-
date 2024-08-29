#include<iostream>
#include<math.h>
using namespace std;

float Roots(int a,int b,int c)
{
    cout<<"root1: "<<(-b+sqrt(b*b+4*a*c))/2*a<<endl;
    cout<<"root2: "<<(-b-sqrt(b*b+4*a*c))/2*a;
    return 0;
}
int main()
{
    int a,b,c;
    cout<<"Enter the number of a ,b, c:"<<endl;
    cin>>a>>b>>c;
    cout<<"Roots are:"<<endl<<Roots(a,b,c);
return 0;
}