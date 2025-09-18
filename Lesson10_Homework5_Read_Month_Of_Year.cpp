#include<iostream>
#include<math.h>
using namespace std;

enum enMonth_Of_Year{Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7 , Aug=8, Sep=9, Oct=10, Nov=11, Dec=12};

int Read_Number_In_Range(string Message,int From,int To)
{
    int Number=0;
    do
    {
    cout<<Message<<endl;
    cin>>Number;
    }while(Number<From||Number>To);

    return Number;
}
enMonth_Of_Year Read_Month_Of_Year()
{
    return (enMonth_Of_Year) Read_Number_In_Range("Please enter a month [1 to 12] ?",1,12);
}

string Get_Month_Of_Year(enMonth_Of_Year Month)
{
    switch(Month)
    {
        case enMonth_Of_Year::Jan:
        return "January";
        case enMonth_Of_Year::Feb:
        return "February";
        case enMonth_Of_Year::Mar:
        return "March";
        case enMonth_Of_Year::Apr:
        return "April";
        case enMonth_Of_Year::May:
        return "May";
        case enMonth_Of_Year::Jun:
        return "June";
        case enMonth_Of_Year::Jul:
        return "July";
        case enMonth_Of_Year::Aug:
        return "August";
        case enMonth_Of_Year::Sep:
        return "September";
        case enMonth_Of_Year::Oct:
        return "October";
        case enMonth_Of_Year::Nov:
        return "November";
        case enMonth_Of_Year::Dec:
        return "December";

        default:
        return "Not a Vaild Month";
        
    }
}

int main()
{
    cout<<Get_Month_Of_Year(Read_Month_Of_Year())<<endl;

    return 0;
}
