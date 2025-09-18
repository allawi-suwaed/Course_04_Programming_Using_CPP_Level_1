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

float Total_Months(float Loan_Amount,float Monthly_Installment)
{
    return (float) Loan_Amount/Monthly_Installment;
}

int main()
{
    float Loan_Amount=Read_Positive_Number("Please enter Loan Amount?");
    float Monthly_Installment=Read_Positive_Number("Please enter Monthly Installment?");

    cout<<"\n Total Months to pay = "<<Total_Months(Loan_Amount,Monthly_Installment);
    cout<<endl;

    return 0;
}