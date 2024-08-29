#include <iostream>
#include <math.h>
using namespace std;

int palindNum(int num)
{   int rem , rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}    
int main()
{
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<num;
    int rev=palindNum(num);
    if(num==rev)
    cout<<" is palindrome";
    else
    cout<<" is not a palindrome";
    return 0;
}
