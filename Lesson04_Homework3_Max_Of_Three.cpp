#include<iostream>
#include<string>
using namespace std;

void Read_Numbers(int& A,int& B,int& C)
{

    cout<<"Please enter Number A?"<<endl;
    cin>>A;

    cout<<"Please enter Number B?"<<endl;
    cin>>B;

    cout<<"Please enter Numer C?"<<endl;
    cin>>C;

}
int Max_Of_3_Numbers(int A,int B,int C)
{
    if(A>B)
    if(A>C)
    return A;
    else
    return C;

    else
    if(B>C)
    return B;
    else
    return C;
}

void Print_Results(int Max)
{
    cout<<"\n The Maximum Number is: "<<Max<<endl;
}
int main()
{
    int A,B,C;

    Read_Numbers(A,B,C);
    Print_Results(Max_Of_3_Numbers(A,B,C));

    return 0;
}