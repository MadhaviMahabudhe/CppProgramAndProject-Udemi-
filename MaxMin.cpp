#include <iostream>
#include <math.h>
using namespace std;
 
 class MinMax
 {
    public:
    int n;
    int num[100];
     
 int MaxNum()
 {
    int max=num[0];
    for(int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
 }
  int MinNum()
 {
    int min=num[0];
    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
 }
 void GetData()
 {
     cout<<"Enter the number of array element:"<<endl;
     cin>>n;
     cout<<"Enter the array element:"<<endl;
     for(int i=0;i<n;i++)
     {
        cin>>num[i];
     }
 }
 };

   
int main()
{
    MinMax obj;
    obj.GetData();
    cout<<"Maximum is:"<<obj.MaxNum()<<endl;
    cout<<"Minimum is:"<<obj.MinNum()<<endl;
    return 0;
}
