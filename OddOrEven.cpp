#include<iostream>
using namespace std;
 void OddEven(int num)
{
    if(num%2==0)
    cout<<num<<" is even."<<endl;
    else
    cout<<num<<" is odd."<<endl;
}
int main()
{
   int num ;
   cout<<"Enter the number:";
   cin>>num;
   OddEven(num);
   return 0;
}