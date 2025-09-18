#include<iostream>
#include<math.h>
using namespace std;

enum enPrime_NotPrime{Prime=1,NotPrime=2};

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

float Calculate_Remainder(float Total_Bill,float Total_Cash_Paid)
{
    return Total_Cash_Paid-Total_Bill;
}

int main()
{
    float Total_Bill=Read_Positive_Number("Please enter Total Bill?");
    float Total_Cash_Paid=Read_Positive_Number("Please enter Total cash paid?");

    cout<<endl;
    cout<<"Total Bill= "<<Total_Bill<<endl;
    cout<<"Total Cash Paid= "<<Total_Cash_Paid<<endl;

    cout<<"**********"<<endl;
    cout<<"Remainder= "<<Calculate_Remainder(Total_Bill,Total_Cash_Paid)<<endl;

    return 0;
}