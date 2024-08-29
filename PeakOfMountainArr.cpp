#include <iostream>
using namespace std;

int PeakOfMountainArr(int arr[] ,int n) 
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
 
int main()
{
    int arr[100];
    int n;
    cout<<"Enter the number of element:"<<endl;
    cin>>n;
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Peak of mountain array is:"<< PeakOfMountainArr(arr,n) ;
    cout<<endl;
    return 0;
}
