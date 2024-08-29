#include<iostream>
#include<math.h>
using namespace std;
float DistPoint(float x1,float x2,float y1,float y2)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int main()
{   int x1,x2,y1,y2;
    cout<<"Enter the value"<<endl;
    cin>>x1>>x2>>y1>>y2;
    cout<<"Distance  is:"<<DistPoint(x1,x2,y1,y2);
    
    return 0;
}
