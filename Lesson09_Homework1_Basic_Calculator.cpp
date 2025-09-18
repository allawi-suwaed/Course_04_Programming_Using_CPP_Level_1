#include<iostream>
using namespace std;

enum enOperation_Type {Add='+',Subtract='-',Multiply='*',Divide='/'};

float Read_Number(string Message)
{
    float Number=0;

    cout<<Message<<endl;
    cin>>Number;

    return Number;
}

enOperation_Type Read_Op_Type()
{
    char oT='+';

    cout<<"Please enter operation Type (+,-,*,/)?\n";
    cin>>oT;

    return (enOperation_Type)oT;
}

float Calculate(float Number1,float Number2,enOperation_Type op_Type)
{
    switch(op_Type)
    {
        case enOperation_Type::Add:
        return Number1+Number2;

        case enOperation_Type::Subtract:
        return Number1-Number2;

        case enOperation_Type::Multiply:
        return Number1*Number2;

        case enOperation_Type::Divide:
        return Number1/Number2;

        default:
        return Number1+Number2;
    }

}

int main()
{
    float Number1=Read_Number("Please enter the first number?");
    float Number2=Read_Number("Please enter the second number?");

    enOperation_Type Op_Type=Read_Op_Type();

    cout<<"Result= "<<Calculate(Number1,Number2,Op_Type)<<endl;

    return 0;
}