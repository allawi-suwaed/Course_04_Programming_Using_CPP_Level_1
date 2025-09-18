#include<iostream>
#include<string>
using namespace std;

void Read_Numbers(int& Num1,int& Num2)
{

    cout<<"Please enter Number 1?"<<endl;
    cin>>Num1;

    cout<<"Please enter Number 2?"<<endl;
    cin>>Num2;

}
int Max_Of_2_Numbers(int Num1,int Num2)
{
    if(Num1>Num2)
    return Num1;
    else
    return Num2;
}

void Print_Results(int Max)
{
    cout<<"\n The Maximum Number is: "<<Max<<endl;
}
int main()
{
    int Num1,Num2;

    Read_Numbers(Num1,Num2);
    Print_Results(Max_Of_2_Numbers(Num1,Num2));

    return 0;
}