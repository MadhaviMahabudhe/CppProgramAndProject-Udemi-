#include <iostream>
#include <math.h>
using namespace std;

int Reverse(int n)
{
    int ans=0;
    int  i=0,dig;
    while(n!=0)
    {    
        dig=n%10;
        ans=dig*pow(10,i)+ans;
        n=n/10;
        i++;
    }
    return ans;
}
   
int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<"Actual number is:"<<num<<endl;
    cout<<"Reverse is:"<<Reverse(num)<<endl;
    return 0;
}
