#include<iostream>
using namespace std;

string Read_Pin_Code()
{
    string Pin_Code;
    cout<<"Please enter Pin code?"<<endl;
    cin>>Pin_Code;

    return Pin_Code;
}

bool Login()
{
    string Pin_Code;
    do
    {
        Pin_Code=Read_Pin_Code();
        if(Pin_Code=="1234")
        {
            return 1; //this will exit the function and return 1.
        }
        else
        {
            cout<<"\n worng PIN!\n";
            system("color 4F"); //turn screen to red.
        }
    }while(Pin_Code!="1234");

    return 0; //when you reach here this means login faild.
}

int main()
{
    if(Login())
    {
        system("color 2F"); //turn screen to green.
        cout<<"\n you account balance is "<<7500<<'\n';
    };

    return 0;
}