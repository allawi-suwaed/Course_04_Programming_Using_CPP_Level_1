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

void Print_Result(int Age)
{
    if(Validate_Age_In_Range(Age,18,45))
       cout<<Age<<" is a valid age"<<endl;

    else
       cout<<Age<<" is a invalid age"<<endl;

}

int main()
{
    Print_Result(Read_Age());

    return 0;
}