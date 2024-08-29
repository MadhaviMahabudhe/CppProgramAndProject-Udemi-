#include<iostream>
using namespace std;

int workingHr(int hr)
{
    if(9<=hr && hr<=18)
    return 1;
    else
    return 0;
}
int main()
{
    int hr ;
    cout <<"enter the hour:"<<endl;
    cin>>hr;
    if(workingHr(hr))
    cout<<"working hour"<<endl;
    else
    cout<<"non warking hour"<<endl;
    return 0;
}