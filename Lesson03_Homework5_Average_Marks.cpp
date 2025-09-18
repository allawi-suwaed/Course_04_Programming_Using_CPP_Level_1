#include<iostream>
#include<string>
using namespace std;

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

void Print_Results(float average)
{
    cout<<"\n The average is: "<<average<<endl;
}

int main()
{
    int mark1,mark2,mark3;

    Read_Marks(mark1,mark2,mark3);

    Print_Results(Caluclate_Average(mark1,mark2,mark3));

    return 0;
}