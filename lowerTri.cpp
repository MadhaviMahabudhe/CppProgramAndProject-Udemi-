#include <iostream>
using namespace std;

int main()
{
    int row ;
    cout<<"Enter the number of row "<<endl;
    cin>>row;
    for(int i=1;i<=row;i++)
    {   int key=(row+1)-i;
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=(row-i)+key;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
