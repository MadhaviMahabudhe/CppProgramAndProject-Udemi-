#include <iostream>
#include <math.h>
using namespace std;

int armstrongNum(int num)
{   int rem ,digit,sum=0,count=0;
    int temp=num;
        while(temp!=0){
        count++;
        temp=temp/10;
    }
    while(num!=0)
    {
        rem=num%10;
        digit=pow(rem,count);
        sum=sum+digit;
        num=num/10;
    }
   
    return sum;
    
}
int main()
{
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<num;
    int arm=armstrongNum(num);
    if(num==arm)
    cout<<" is armstrong number";
    else
    cout<<" is not armstrong number";
    return 0;
}
