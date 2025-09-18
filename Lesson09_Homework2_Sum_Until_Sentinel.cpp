#include<iostream>
using namespace std;

float Read_Number(string Message)
{
    float Number=0;

    cout<<Message<<endl;
    cin>>Number;

    return Number;
}

float Sum_Numbers()
{
    int Sum=0,Number=0,Counter=1;
    do
    {
        Number=Read_Number("Please enter Number"+to_string(Counter));

        if(Number==-99)
        {
            break;
        }

        Sum+=Number;
        Counter++;
    }while(Number!=-99);

    return Sum;
}

int main()
{
    int Result=Sum_Numbers();
    cout<<endl<<"Result= "<<Result<<endl;

    return 0;
}