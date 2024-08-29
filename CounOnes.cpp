#include <iostream>
using namespace std;

int NumberOfOnes(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}
   
int main()
{
    int num;
    cout<<"Enter the binary number:"<<endl;
    cin>>num;
    cout<<"Number of ones is:"<<NumberOfOnes(num)<<endl;
    return 0;
}