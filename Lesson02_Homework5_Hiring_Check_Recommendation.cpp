#include<iostream>
#include<string>
using namespace std;

struct stInfo
{
    short age;
    bool Has_driver_license;
    bool Has_Recommendation;
};

stInfo read_info()
{
    stInfo Info;

    cout<<"please enter your age?"<<endl;
    cin>>Info.age;

    cout<<"Do you have driver License?(0 or 1)"<<endl;
    cin>>Info.Has_driver_license;

    cout<<"Do you have Recommendation?(0 or 1)"<<endl;
    cin>>Info.Has_Recommendation;

    return Info;
}

bool Is_Accepted(stInfo Info)
{
    if(Info.Has_Recommendation)
    {
        return true;
    }
    else
    {
        return(Info.age>21&&Info.Has_driver_license);
    }
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