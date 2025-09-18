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

float Total_Bill_After_Service_Fee_And_Tax(float Total_Bill)
{
    Total_Bill=Total_Bill*1.1;
    Total_Bill=Total_Bill*1.16;

    return Total_Bill;
}

int main()
{
    float Total_Bill=Read_Positive_Number("Please enter Total Bill?");

    cout<<endl;
    cout<<"Total Bill= "<<Total_Bill<<endl;
    cout<<"Total Bill After Service Fee And Tax= "<<Total_Bill_After_Service_Fee_And_Tax(Total_Bill)<<endl;

    return 0;
}  