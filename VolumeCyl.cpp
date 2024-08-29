#include<iostream>
using namespace std;
float VolumeCyl(float r,float h)
{
    return 2*3.1425*r*r*h;
}

int main()
{   int radius,height;
    cout<<"Enter the value of radius and height"<<endl;
    cin>>radius>>height;
    cout<<"volume of cylinder is:"<<VolumeCyl(radius,height);
    
    return 0;
}
