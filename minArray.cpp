#include <iostream>
using namespace std;

int main()
{  
    int limit;
    int A[100];
    cout<<"Enter the array limit ";
    cin>>limit;
    cout<<"Array is "<<endl;
    for(int i=0;i<limit;i++)
    {  
        cin>>A[i];
    }
    int small=A[0];
    for(int i=0;i<limit;i++)
    {   
        if(small>A[i])
        { small=A[i]; }
    }
    cout<<"Largest of array element is "<<small;
    return 0;
}
