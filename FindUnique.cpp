#include <iostream>
using namespace std;

int FindUnique(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
  return ans;    
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
   cout<<"Unique number is:"<<FindUnique(arr,n)<<endl;
    return 0;
}
