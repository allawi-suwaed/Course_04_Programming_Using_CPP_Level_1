#include<iostream>
#include<math.h>
using namespace std;

float Read_Positive_Number(string Message)
{
    float Number=0;
    do
    {
    cout<<Message<<endl;
    cin>>Number;
    }while(Number<=0);

    return Number;
}

float Hours_To_Days(float Number_Of_Hours)
{
    return (float)Number_Of_Hours/24;
}

float Hours_To_Weeks(float Number_Of_Hours)
{
    return (float)Number_Of_Hours/24/7;
}

float Days_To_Weeks(float Number_Of_Days)
{
    return (float)Number_Of_Days/7;
}

int main()
{
    float Number_Of_Hours=Read_Positive_Number("Please enter Number of Hours?");
    float Number_Of_Days=Hours_To_Days(Number_Of_Hours);
    float Number_Of_Weeks=Days_To_Weeks(Number_Of_Days);

    cout<<endl;
    cout<<"Total Hours= "<<Number_Of_Hours<<endl;
    cout<<"Total Days= "<<Number_Of_Days<<endl;
    cout<<"Total Weeks= "<<Hours_To_Weeks(Number_Of_Hours)<<endl;

    return 0;
}