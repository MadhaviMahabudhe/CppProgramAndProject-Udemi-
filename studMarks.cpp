#include<iostream>
#include<string>
using namespace std;

string grades(int m1, int m2,int m3,int m4)
{
    int sum=m1+m2+m3+m4;
    if(sum>=300 )
    return "grade A";
    else if( sum>=200 && sum<300)
    return "grade B";
    else if(sum>=100 && sum<200)
    return "grade C";
    else 
    return "grade D";
   
}

int main()
{
    string name;
    int m1,m2,m3,m4;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter the 4 subject marks:"<<endl;
    cin>>m1>>m2>>m3>>m4;
    cout<<grades(m1,m2,m3,m4);
    return 0;
}