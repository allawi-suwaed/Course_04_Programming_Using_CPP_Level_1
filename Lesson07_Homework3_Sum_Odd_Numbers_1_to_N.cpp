#include<iostream>
using namespace std;

enum enOdd_Or_Even{odd=1,even=2};

int Read_Number()
{
    int Number;

    cout<<"Please enter a number?"<<endl;
    cin>>Number;

    return Number;
}

enOdd_Or_Even Check_Odd_Or_Even(int Number)
{
    if(Number%2 != 0)
    return enOdd_Or_Even::odd;

    else
    return enOdd_Or_Even::even;
}

int Sum_Odd_Numbers_from_N_to_1_Using_While(int N)
{
    int counter=0;
    int Sum=0;

    cout<<"sum odd number using while statement: \n";

    while(counter<N)
    {
        counter++;
        if(Check_Odd_Or_Even(counter)==enOdd_Or_Even::odd)
        {
            Sum+=counter;
        }   
    }
    
    return Sum;
}

int Sum_Odd_Numbers_from_N_to_1_Using_Do_While(int N)
{
    int counter=0;
    int Sum=0;

    cout<<"sum odd number using Do while statement: \n";

    do
    {
        counter++;
        if(Check_Odd_Or_Even(counter)==enOdd_Or_Even::odd)
        {
            Sum+=counter;
        }   
    }while(counter<N);
    
    return Sum;

}

int Sum_odd_Numbers_from_N_to_1_Using_for(int N)
{
    int Sum=0;

    cout<<"sum odd number using for statement: \n";

    for(int counter=1;counter<=N;counter++)
    {
        if(Check_Odd_Or_Even(counter)==enOdd_Or_Even::odd)
        {
            Sum+=counter;
        }   
    }
    
    return Sum;
}

int main()
{
    int N=Read_Number();

    cout<<Sum_Odd_Numbers_from_N_to_1_Using_While(N)<<endl;
    cout<<Sum_Odd_Numbers_from_N_to_1_Using_Do_While(N)<<endl;
    cout<<Sum_odd_Numbers_from_N_to_1_Using_for(N)<<endl;
    
    return 0;
}