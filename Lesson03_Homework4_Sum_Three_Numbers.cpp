#include<iostream>
#include<string>
using namespace std;

void read_numbers(int& num1,int& num2,int& num3)
{
    cout<<"please enter number 1?"<<endl;
    cin>>num1;

    cout<<"please enter number 2?"<<endl;
    cin>>num2;

    cout<<"please enter number 3?"<<endl;
    cin>>num3;
}

int sum_of_3_numbers(int num1,int num2,int num3)
{
    return num1+num2+num3;
}

void print_results(int total)
{
    cout<<"\n The total sum of numbers is: "<<total<<endl;
}

int main()
{
    int num1,num2,num3;

    read_numbers(num1,num2,num3);
    print_results(sum_of_3_numbers(num1,num2,num3));

    return 0;
}