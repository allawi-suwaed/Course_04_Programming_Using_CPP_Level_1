#include<iostream>
#include<string>
using namespace std;

int Read_Number()
{
    int Number;

    cout<<"Please enter a Number?"<<endl;
    cin>>Number;

    return Number;
}

void Power_of_2_3_4(int Number)
{
    int a,b ,c;

    a=Number*Number;
    b=Number*Number*Number;
    c=Number*Number*Number*Number;

    cout<<a<<" "<<b<<" "<<c<<endl;
}

int main()
{
    Power_of_2_3_4(Read_Number());

    return 0;
}