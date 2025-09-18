#include<iostream>
using namespace std;

int Read_Number()
{
    int Number;

    cout<<"Please enter a number?"<<endl;
    cin>>Number;

    return Number;
}

void Print_Range_from_1_to_N_Using_While(int N)
{
    int counter=0;

    cout<<"Range Printed using while statement: \n";

    while(counter<N)
    {
        counter++;
        cout<<counter<<endl;   
    }
}

void Print_Range_from_1_to_N_Using_Do_While(int N)
{
    int counter=0;

    cout<<"Range Printed using Do while statement: \n";

    do
    {
        counter++;
        cout<<counter<<endl;
    }while(counter<N);

}

void Print_Range_from_1_to_N_Using_for(int N)
{
    cout<<"Range Printed using for statement: \n";

    for(int counter=1;counter<=N;counter++)
    {
        cout<<counter<<endl;
    }
}

int main()
{
    int N=Read_Number();

    Print_Range_from_1_to_N_Using_While(N);
    Print_Range_from_1_to_N_Using_Do_While(N);
    Print_Range_from_1_to_N_Using_for(N);

    return 0;
}