#include<iostream>
#include<math.h>
using namespace std;
int Max(int a,int b)
{return a>b?a:b;}
 int main()
 {
     int a,b;
     cout<<"Enter the numbers:"<<endl;
     cin>>a>>b;
     cout<<"Largest number is:"<<Max(a,b);
 }