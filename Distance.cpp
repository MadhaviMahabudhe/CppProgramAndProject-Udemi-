#include<iostream>
using namespace std;

int Distance( int u,int v,int a)
{
    return (v*v-u*u)/2*a;
}
int main()
{
    int u, v ,a ;
    cout<<"Enter the value of u ,v ,a :"<<endl;
    cin>>u>>v>>a;
    cout<<"Distance is: "<<Distance (u,v,a)<<endl;
    
    return 0;
}