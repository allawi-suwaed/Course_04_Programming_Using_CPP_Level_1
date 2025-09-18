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

stTask_Duration Read_Task_Duration()
{
    stTask_Duration Task_Duration;

    Task_Duration.Number_Of_Days=Read_Positive_Number("Please enter Number Of Days?");
    Task_Duration.Number_Of_Hours=Read_Positive_Number("Please enter Number Of Hours?");
    Task_Duration.Number_Of_Minutes=Read_Positive_Number("Please enter Number Of Minutes?");
    Task_Duration.Number_Of_Seconds=Read_Positive_Number("Please enter Number Of Seconds?");

    return Task_Duration;
}

int Task_Duration_In_Seconds(stTask_Duration Task_Duration)
{
    int Duration_In_Seconds=0;

    Duration_In_Seconds=Task_Duration.Number_Of_Days*24*60*60;
    Duration_In_Seconds+=Task_Duration.Number_Of_Hours*60*60;
    Duration_In_Seconds+=Task_Duration.Number_Of_Minutes*60;
    Duration_In_Seconds+=Task_Duration.Number_Of_Seconds;

    return Duration_In_Seconds;
}

int main()
{

    int Result=Task_Duration_In_Seconds(Read_Task_Duration());
    cout<<"\n Task Duration In Seconds: "<<Result;
    cout<<endl;

    return 0;

}
