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
void Swap(int& A,int& B)
{
    int Temp;
    Temp=A;
    A=B;
    B=Temp;
}
void Print_Numbers(int Num1,int Num2)
{
    cout<<"\nNumber 1= "<<Num1<<endl;
    cout<<"Number 2= "<<Num2<<endl;
}
int main()
{
    int Num1,Num2;

    Read_Numbers(Num1,Num2);
    Print_Numbers(Num1,Num2);
    Swap(Num1,Num2);
    Print_Numbers(Num1,Num2);

    return 0;
}