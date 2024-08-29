#include<iostream>

using namespace std;
void arithOut(int x,int y, int choice)
{
    switch(choice)
    {
        case 1: cout<<x+y;
        break;
        case 2: cout<<x-y;
        break;
        case 3: cout<<x*y;
        break;
        case 4: cout<<x/y;
        break;
        default:
        cout<<"non proper choice";
    }
}

int main()
{
    int n1,n2, ch;
    cout<<"Enter two numbers: "<<endl;
    cin>>n1>>n2;
    cout<<"Enter choice: "<<endl;
    cin>>ch;
    arithOut(n1,n2,ch);
    return 0;
}