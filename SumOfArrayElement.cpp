#include <iostream>
#include <math.h>
using namespace std;
 
int SumOfArrayElement(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

void GetSum()
{
    int arr[100];
    int n;
    cout<<"Enter the number of element:"<<endl;
    cin>>n;
    cout<<"Enter the array elemant:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Sum is:"<<SumOfArrayElement(arr,n);
}
   
int main()
{
    GetSum();
    return 0;
}
