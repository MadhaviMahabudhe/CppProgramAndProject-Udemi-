#include <iostream>
using namespace std;

 int FirstOcc(int arr[],int n, int key)
 {
    int s=arr[0] ;
    int e=arr[n-1];
    int mid=s+(e-s)/2;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if (arr[mid]==key)
        { 
            ans=mid;
            e=mid-1; 
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
 }
 
 int LastOcc(int arr[],int n,int key)
 {
    int s=arr[0] ;
    int e=arr[n-1];
    int mid=s+(e-s)/2;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if (arr[mid]==key)
        { 
            ans=mid;
            s=mid+1; 
        }
        else if(arr[mid]<key)
        {
            e=mid-1;
        }
        else if(arr[mid]>key)
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
 }


int main()
{
    int arr[100];
    int n,key;
    cout<<"Enter the number of element:"<<endl;
    cin>>n;
    cout<<"Enter the key:"<<endl;
    cin >>key;
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"First and Last position of key is:"<<  FirstOcc(arr,n,key)<<"  "<<LastOcc(arr, n, key);
    cout<<endl;
    return 0;
}
