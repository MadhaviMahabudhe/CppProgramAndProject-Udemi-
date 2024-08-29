#include <iostream>
#include <math.h>
using namespace std;

int revNum(int num)
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
    cout<<" Reverse of number is "<<revNum(num);
    return 0;
}
