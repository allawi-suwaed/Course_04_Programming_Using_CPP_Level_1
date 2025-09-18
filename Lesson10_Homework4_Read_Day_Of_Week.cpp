#include<iostream>
#include<math.h>
using namespace std;

enum enDay_Of_Week{Sat=1,Sun=2,Mon=3,Tue=4,Wed=5,Thu=6,Fri=7};

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
enDay_Of_Week Read_Day_Of_Week()
{
    return (enDay_Of_Week) Read_Number_In_Range("Please enter day number Sat=1, Sun=2, Mon=3, Tue=4, Wed=5, Thu=6, Fri=7 ?",1,7);
}

string Get_Day_Of_Week (enDay_Of_Week Day)
{
    switch(Day)
    {
        case enDay_Of_Week::Sat:
        return "Saturday";
        case enDay_Of_Week::Sun:
        return "Sunday";
        case enDay_Of_Week::Mon:
        return "Monday";
        case enDay_Of_Week::Tue:
        return "Tuesday";
        case enDay_Of_Week::Wed:
        return "Wednesday";
        case enDay_Of_Week::Thu:
        return "Thursday";
        case enDay_Of_Week::Fri:
        return "Friday";

        default:
        return "Not a Vaild day";
        
    }
}

int main()
{
    cout<<Get_Day_Of_Week(Read_Day_Of_Week())<<endl;

    return 0;
}
