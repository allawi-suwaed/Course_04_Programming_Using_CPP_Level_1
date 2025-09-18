#include<iostream>
#include<math.h>
using namespace std;

struct stTask_Duration
{
    int Number_Of_Days,Number_Of_Hours,Number_Of_Minutes,Number_Of_Seconds;
};

int Read_Positive_Number(string Message)
{
    int Number=0;
    do
    {
    cout<<Message<<endl;
    cin>>Number;
    }while(Number<=0);

    return Number;
}

stTask_Duration Seconds_To_Task_Duration(int Total_Seconds)
{
    stTask_Duration Task_Duration;

    const int Seconds_Per_Day=24*60*60;
    const int Seconds_Per_Hour=60*60;
    const int Seconds_Per_Minute=60;

    int Remainder=0;

    Task_Duration.Number_Of_Days=floor(Total_Seconds/Seconds_Per_Day);
    Remainder=Total_Seconds%Seconds_Per_Day;
    Task_Duration.Number_Of_Hours=floor(Remainder/Seconds_Per_Hour);
    Remainder=Remainder%Seconds_Per_Hour;
    Task_Duration.Number_Of_Minutes=floor(Remainder/Seconds_Per_Minute);
    Remainder=Remainder%Seconds_Per_Minute;
    Task_Duration.Number_Of_Seconds=Remainder;

    return Task_Duration;
}

void Print_Task_Duration_Details(stTask_Duration Task_Duration)
{
    cout<<"\n";

    cout<<Task_Duration.Number_Of_Days<<":"<<Task_Duration.Number_Of_Hours<<":"
    <<Task_Duration.Number_Of_Minutes<<":"<<Task_Duration.Number_Of_Seconds<<"\n";
}


int main()
{

    int Total_Seconds=Read_Positive_Number("Please enter total seconds?");
    Print_Task_Duration_Details(Seconds_To_Task_Duration(Total_Seconds));

    return 0;

}
