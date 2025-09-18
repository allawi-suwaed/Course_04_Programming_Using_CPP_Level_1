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

enPrime_NotPrime Check_Prime(int Number)
{
    int M=round(Number/2);
    for(int counter=2;counter<=M;counter++)
    {
        if(Number%counter==0)
        return enPrime_NotPrime::NotPrime;
    }

    return enPrime_NotPrime::Prime;
}

void Prime_Number_Type(int Number)
{
    switch(Check_Prime(Number))
    {
        case enPrime_NotPrime::Prime:
        cout<<"The number is Prime \n";
        break;

        case enPrime_NotPrime::NotPrime:
        cout<<"The number is not Prime\n";
        break;
    }
}

int main()
{
    Prime_Number_Type(Read_Positive_Number("Please enter a positive number?"));

    return 0;
}