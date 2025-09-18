#include<iostream>
#include<string>
using namespace std;

enum enPass_fail{pass=1,fail=2};

int read_mark()
{
    int mark;

    cout<<"enter your mark?"<<endl;
    cin>>mark;

    return mark;
}

enPass_fail check_mark(int mark)
{
    if(mark>=50)
    return enPass_fail::pass;
    else
    return enPass_fail::fail;
}

void print_results(int mark)
{
    if(check_mark(mark)==enPass_fail::pass)
    cout<<"\n you passed"<<endl;
    else
    cout<<"\n you faild"<<endl;
}

int main()
{
    print_results(read_mark());

    return 0;
}