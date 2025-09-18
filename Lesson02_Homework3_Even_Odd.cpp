#include<iostream>
#include<string>
using namespace std;
 enum enNumber_type{odd=1,even=2};

 int read_number()
{
    short num;
    
    cout<<"please enter a number?"<<endl;
    cin>>num;

    return num;
}

enNumber_type check_number_type(int num)
{
    int result=num%2;

    if(result==0)
    return enNumber_type::even;
    else
    return enNumber_type::odd;
}

void print_number_type(enNumber_type Number_type)
{
    if(Number_type==enNumber_type::even)
    cout<<"\n Number is even\n";
    else
    cout<<"\n Number is odd\n";
}

int main()
{
    print_number_type(check_number_type(read_number()));

    return 0;
}