#include<iostream>
#include<string>
using namespace std;

string read_name()
{
    string name;

    cout<<"please enter your name?\n"<<endl;
    getline(cin,name);
    return name;
}

void print_name(string name)
{
    cout<<"your name is : "<<name<<endl;
}

int main()
{
    print_name(read_name());
    return 0;
}