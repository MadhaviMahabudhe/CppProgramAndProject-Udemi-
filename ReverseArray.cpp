#include <iostream>
using namespace std;

void ReverseArray(int arr[],int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
 void printArray(int arr[],int n)
{
    cout<<"Reversed array is:"<<endl;;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter the number of array element:"<<endl;
    cin >>n;
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ReverseArray(arr,n);
    printArray(arr,n);
    return 0;
}
