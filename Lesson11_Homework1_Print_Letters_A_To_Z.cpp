#include<iostream>
using namespace std;

void Print_Letters_A_To_Z()
{
    for(int i=65;i<=90;i++)
    {
        cout<<char(i)<<endl;
    }
}

int main()
{
    Print_Letters_A_To_Z();
    return 0;
}