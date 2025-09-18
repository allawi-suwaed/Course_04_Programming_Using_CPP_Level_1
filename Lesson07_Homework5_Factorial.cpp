#include<iostream>
using namespace std;

int Read_Positive_Number(string Message)
{
    int Number;

    do
    {
        cout<<Message<<endl;
        cin>>Number;
    }while(Number<0);

    return Number;
}

int Factorial(int N)
{
    int F=1;
    for(int counter=N;counter>=1;counter--)
    {
        F=F*counter;
    }

    return F;
}

int main()
{
    cout<<Factorial(Read_Positive_Number("Enter N?"))<<endl;

    return 0;
}