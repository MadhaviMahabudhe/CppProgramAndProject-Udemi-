#include<iostream>
using namespace std;
int SimpleInterest(int P,int T,int R)
{
    float SI;
    
    SI=(P*T*R)/100;
    return SI;
}
int main()
{   int p,t,r;
    cout<<"Enter the value of P,T,R"<<endl;
    cin>>p>>t>>r;
    cout<<"Simple interest is: "<<SimpleInterest(p,t,r);
    return 0;
}
