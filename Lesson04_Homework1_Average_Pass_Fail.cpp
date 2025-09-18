#include<iostream>
#include<string>
using namespace std;

enum enPass_Fail{pass=1,fail=2};

void Read_Marks(int& mark1,int& mark2,int& mark3)
{
    cout<<"please enter mark 1?"<<endl;
    cin>>mark1;

    cout<<"please enter mark 2?"<<endl;
    cin>>mark2;

    cout<<"please enter mark 3?"<<endl;
    cin>>mark3;
}

int Sum_Of_3_Marks(int mark1,int mark2,int mark3)
{
    return mark1+mark2+mark3;
}

float Caluclate_Average(int mark1,int mark2,int mark3)
{
    return (float) Sum_Of_3_Marks(mark1,mark2,mark3)/3;
}

enPass_Fail Check_Average(float Average)
{
    if(Average>=50)
    return enPass_Fail::pass;
    else
    return enPass_Fail::fail;
}

void Print_Results(float Average)
{
    cout<<"\n The average is: "<<Average<<endl;
    if(Check_Average(Average)==enPass_Fail::pass)
    cout<<"\n you passed"<<endl;
    else
    cout<<"\n you failed"<<endl;
}

int main()
{
    int mark1,mark2,mark3;

    Read_Marks(mark1,mark2,mark3);

    Print_Results(Caluclate_Average(mark1,mark2,mark3));

    return 0;
}