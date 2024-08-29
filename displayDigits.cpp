#include<iostream>
using namespace std;

void displayDigit(int num)
{   int rem;
    while(num!=0)
    {
      rem=num%10;
      cout<<rem<<" ";
      num=num/10;
    }
    
}

int main()
{
    int num;
    cout<<"Enter the number ";
    cin >>num;
    cout<<"Digits are:";
    displayDigit(num);
    return 0;
}