#include <iostream>
#include <math.h>
using namespace std;

int DeciToBin(int n)
{
    int bit, ans=0;
    int i=0;
    while(n!=0)
    {
        bit=n&1;
        ans=bit*pow(10 ,i)+ans;
        n=n>>1;
        i++;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the decimal number:"<<endl;
    cin>>n;
    cout<<"Binary is :"<<DeciToBin(n);
    return 0;
}
