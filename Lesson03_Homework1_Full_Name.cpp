#include<iostream>
#include<string>
using namespace std;

struct stInfo
{
    string firstname;
    string lastname;
};

stInfo read_Info()
{
    stInfo Info;

    cout<<"enter your first name?"<<endl;
    cin>>Info.firstname;

    cout<<"enter your last name?"<<endl;
    cin>>Info.lastname;

    return Info;
}
//? did you want print firstname after lastname? 
//! to be that, remove (slash)!
string get_full_name(stInfo Info/*, bool reversed*/)
{
    string fullname;
    //! if(reversed)
    //! fullname=Info.lastname+" "+Info.firstname;
    fullname=Info.firstname+" "+Info.lastname;
    return fullname;
}

void print_full_name(string fullname)
{
    cout<<"\n your full name is: "<<fullname<<endl;
}

int main()
{
    print_full_name(get_full_name(read_Info()/*,true*/));

    return 0;
}