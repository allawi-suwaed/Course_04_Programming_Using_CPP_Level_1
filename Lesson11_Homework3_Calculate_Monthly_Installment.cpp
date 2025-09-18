#include<iostream>
using namespace std;

float Read_Positive_Number(string Message)
{
    float Number=0;
    do
    {
    cout<<Message<<endl;
    cin>>Number;
    }while(Number<=0);

    return Number;
}

float Monthly_Installment(float Loan_Amount,float How_Many_Months)
{
    return (float) Loan_Amount/How_Many_Months;
}

int main()
{
    float Loan_Amount=Read_Positive_Number("Please enter Loan Amount?");
    float How_Many_Months=Read_Positive_Number("Please enter Many Months?");

    cout<<"\n Monthly Installment = "<<Monthly_Installment(Loan_Amount,How_Many_Months);
    cout<<endl;

    return 0;
}