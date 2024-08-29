#include <iostream>
using namespace std;

int fact(int limit)
{
    int fact=1;
    for(int i=1;i<=limit;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Factorial is "<<fact(num);
    return 0;
}
