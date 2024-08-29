#include <iostream>
using namespace std;
int triarea(int b,int h)
{  
    return 0.5*b*h;
}
int main() 
{
    int b,h;
    cout<<" enter the value of base and height:"<<endl;
    cin>>b>>h;
    float area;
    cout<<"Area is:"<<triarea(b,h);
 
 return 0;
}
