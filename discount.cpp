 #include<iostream>

using namespace std;
float bill( float amount)
{
    if(amount<1000)
    cout<<"no discount";
    else if(amount>1001 && amount<=3999)
    { cout<<"15% discounted amount= "<<amount-amount*15/100;}
    else if(amount>=4000)
    { cout<<"25% discounted amount= "<< amount-amount*25/100; }
      return 0;
}      
      
int main()
{   
    float cost, amount;
    cout <<"Enter the total amount: "<<endl;
    cin>>amount;
    bill(amount);
    return 0;
}