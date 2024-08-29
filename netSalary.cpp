#include<iostream>
using namespace std;

float netSalary(int bs ,int pa, int pd)
{
    return bs+bs*pa/100-bs*pd/100;
}
int main()
{
    int BS,PA,PD;
    cout<<"Basic salary: "<<endl;
    cin>>BS;
    cout<<"Percentage Alloeances: "<<endl;
    cin>>PA;
    cout<<"Percentage Deduction: "<<endl;
    cin>>PD;
    cout<<"net salary:"<<netSalary(BS,PA,PD)<<endl;
    return 0;
}