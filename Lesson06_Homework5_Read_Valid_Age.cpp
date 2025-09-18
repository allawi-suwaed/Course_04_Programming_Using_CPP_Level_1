#include<iostream>
using namespace std;

int Read_Age()
{
    int Age;

    cout<<"Please enter your Age?"<<endl;
    cin>>Age;

    return Age;
}

bool Validate_Age_In_Range(int Age,int From,int To)
{
    return (Age>=From&&Age<=To);
}

int Read_Unitl_Age_Between(int From,int To)
{
    int Age=0;

    do
    {
        Age=Read_Age();
    } while (! Validate_Age_In_Range(Age,From,To));

    return Age;
    
}

void Print_Result(int Age)
{
    cout<<"your Age is: "<<Age<<endl;
}

int main()
{
    Print_Result(Read_Unitl_Age_Between(18,45));

    return 0;
}