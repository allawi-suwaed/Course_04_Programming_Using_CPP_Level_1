#include<iostream>
#include<string>
using namespace std;

int read_number()
{
    int num;

    cout<<"please enter a number?"<<endl;
    cin>>num;

    return num;
}

float calculcate_half_number(int num)
{
    return (float) num /2;
}

void print_results(int num)
{
    string results;

    results="half of "+to_string(num)+" is "+to_string(calculcate_half_number(num));

    cout<<endl<<results<<endl;
}

int main()
{
    print_results(read_number());

    return 0;
}