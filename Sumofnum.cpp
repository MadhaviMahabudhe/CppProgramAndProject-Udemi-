#include<iostream>
using namespace std;
int SumNum(int n );

int main()
{
    int n;
    cout <<"Enter the number"<<endl;
    cin>>n;
 cout<< "Sum of number is:"<<SumNum(n);
return 1;
}
int SumNum(int n)
{
 int sum=0;
 for(int i=0;i<=n;i++)
 {
     sum=sum+i;
 }
 return sum;
    
}


