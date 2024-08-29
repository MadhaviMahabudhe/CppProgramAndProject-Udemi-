#include <iostream>
#include <math.h>
using namespace std;

int BinToDeci(int n)
{
    int dig, ans=0;
    int i=0;
    while(n!=0)
    {
        dig=n%10;
        if(dig==1)
        {
        ans=ans+pow(2 ,i);
        }
        n=n/10;
        i++;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the binary number:"<<endl;
    cin>>n;
    cout<<"Decimal is :"<<BinToDeci(n);
    return 0;
}
