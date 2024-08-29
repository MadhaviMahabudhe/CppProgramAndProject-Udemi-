#include <iostream>
using namespace std;

int calculation(int n)
{
    int sum=0,prod=1;
    while(n!=0)
    {
        sum=sum+(n%10);
        prod=prod*(n%10);
        n=n/10;
    }
    return (prod-sum);
}
   
int main()
{
    int num ;
    cout<<"enter the number:"<<endl;
    cin>>num;
    cout<<"subtraction of product and sum is:"<<calculation(num)<<endl;
    return 0;
}