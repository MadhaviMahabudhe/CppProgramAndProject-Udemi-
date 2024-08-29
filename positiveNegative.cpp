#include<iostream>
using namespace std;

int NegOrPos(int num)
{
    if(num>0)
    cout<<"Number is positive "<<num<<endl;
    else
    cout<<"Number is negative "<<num<<endl;
    return 0;
}
int main()
{ 
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    NegOrPos(num);
    
    return 0;
}