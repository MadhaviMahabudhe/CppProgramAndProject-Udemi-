#include<iostream>
using namespace std;

string Age(int age)
{
    if(age<=18){
    return "Not eligibal";}
    else if(age>18){
    return "Eligibal";}
};

int main()
{
    int age;
    cout<<"Enter the age: "<<endl;
    cin>>age;
    cout<<age<<Age(age);
    return 0;
}