#include <iostream>
using namespace std;

bool Search(int arr[], int n, int key)
{
 for(int i=0;i<n;i++)
 {
    if(arr[i]==key)
    {
        return 1;
    }
 }
 return 0;
}
int main()
{
    int arr[100];
    int n, key ;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    cout<<"Enter the array element:"<<endl;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key:"<<endl;
    cin>>key;
    if(Search(arr ,n ,key))
    cout<<"key is present."<<endl;
    else
    cout<<"key is not present."<<endl;
    return 0;
}
