#include<iostream>
#include<math.h>
using namespace std;

void perfect(int num)
{   int sum=0;
    for(int i=1; i<num;i++)
    {
        if(num%i==0)
            sum+=i;
    }
    if(sum==num)
    cout<<"perfect number";
    else 
    cout<<"not a perfect number";
}

int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num; 
    perfect(num);
    return 0;
}