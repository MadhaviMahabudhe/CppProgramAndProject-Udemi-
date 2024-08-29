#include <iostream>
using namespace std;

int sumNum(int limit)
{   int sum=0;
    for(int i=1;i<=limit ;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit; 
    cout<<"Sum is "<<sumNum(limit);
    return 0;
}
