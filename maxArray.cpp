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
    int large=A[0];
    for(int i=0;i<limit;i++)
    {   
        if(large<A[i])
        { large=A[i]; }
    }
    cout<<"Largest of array element is "<<large;
    return 0;
}
