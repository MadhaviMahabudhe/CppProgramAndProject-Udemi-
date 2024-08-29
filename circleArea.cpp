#include<iostream>
using namespace std;

float circleArea(int r)
{
    return 3.1425*r*r;
}
int main()
{ 
    int radius;
    cout<<"Enter the radius:"<<endl;
    cin>>radius;
    cout<<"Area of circle is :"<<circleArea(radius);
    return 0;
}