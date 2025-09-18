#include<iostream>
#include<string>
using namespace std;

struct stInfo
{
    short age;
    bool Has_driver_license;
};

stInfo read_info()
{
    stInfo Info;

    cout<<"please enter your age?"<<endl;
    cin>>Info.age;

    cout<<"Do you have driver License?(0 or 1)"<<endl;
    cin>>Info.Has_driver_license;

    return Info;
}

bool Is_Accepted(stInfo Info)
{
    return(Info.age>21&&Info.Has_driver_license);
}

void print_result(stInfo Info)
{
    if(Is_Accepted(Info))
    cout<<"\n Hired "<<endl;
    else
    cout<<"\n Rejected "<<endl;
}

int main()
{
    print_result(read_info());

    return 0;
}