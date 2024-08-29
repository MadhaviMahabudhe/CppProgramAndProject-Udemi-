#include <iostream>
using namespace std;

bool BinarySearch(int arr[],int n,int key)
{
    int start=0,end=n-1, mid;
    mid=start+(end-start)/2;
    while(start<=end)
    {
        if(key==arr[mid])
        {
        return 1;
        }
        if(key<arr[mid])
        {
            end=mid-1;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}

int main()
{
    int arr[100];
    int n, key;
    cout<<"Enter the number of array element:"<<endl;
    cin >>n;
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key:"<<endl;
    cin>>key;
    if(BinarySearch(arr, n, key))
    cout<<"key is present";
    else
    cout<<"key is not present"<<endl;
    return 0;
}
