#include<iostream>
using namespace std;

string day(int d)
{
    switch(d)
    {
        case 1:
        return "Monday";
        break;
        case 2:
        return "tuesday";
        break;
        case 3:
        return "wednesday";
        break;
        case 4:
        return "thusday";
        break;
        case 5:
        return "friday";
        break;
        case 6:
        return "saturday";
        break;
        case 7:
        return "sunday";
        break;
         default:
        cout<<"non proper number ";
        exit ;
        return 0;
    }
}
    
string month(int m)
{
    switch(m)
    {    
        case 1:
        return "January";
        break;
        case 2:
        return "February";
        break;
        case 3:
        return "March";
        break;
        case 4:
        return "April";
        break;
        case 5:
        return "may";
        break;
        case 6:
        return "June";
        break;
        case 7:
        return "July";
        break;
        case 8:
        return "August";
        break;
        case 9:
        return "September";
        break;
        case 10:
        return "October";
        break;
        case 11:
        return "November";
        break;
        case 12:
        return "December";
        break;
        default:
        cout<<"non proper number ";
        exit ;
    }
    return 0;
}

int main()
{
    int m,d;
    cout<<"Enter the day and Month:";
    cin>>d;
    cin>>m;
    cout<<"day and month:"<<endl<<day(d)<<endl<<month(m);
    return 1;
}