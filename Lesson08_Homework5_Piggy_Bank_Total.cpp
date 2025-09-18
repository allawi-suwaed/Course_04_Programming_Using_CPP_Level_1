#include<iostream>
using namespace std;

struct stPiggy_Bank_Contenet
{
    int Pennies,Nickels,Dimes,Quarters,Dollars;
};

stPiggy_Bank_Contenet Read_Piggy_Bank_Contenet()
{
    stPiggy_Bank_Contenet Piggy_Bank_Contenet;

    cout<<"please enter a Total Pennies?"<<endl;
    cin>>Piggy_Bank_Contenet.Pennies;

    cout<<"please enter a Total Nickels?"<<endl;
    cin>>Piggy_Bank_Contenet.Nickels;

    cout<<"please enter a Total Dimes?"<<endl;
    cin>>Piggy_Bank_Contenet.Dimes;

    cout<<"please enter a Total Quarters?"<<endl;
    cin>>Piggy_Bank_Contenet.Quarters;

    cout<<"please enter a Total Dollars?"<<endl;
    cin>>Piggy_Bank_Contenet.Dollars;

    return Piggy_Bank_Contenet;
}

int Calculate_Total_Pennies(stPiggy_Bank_Contenet Piggy_Bank_Contenet)
{
    int Total_Pennies=0;

    Total_Pennies=Piggy_Bank_Contenet.Pennies*1+Piggy_Bank_Contenet.Nickels*5+Piggy_Bank_Contenet.Dimes*10+Piggy_Bank_Contenet.Quarters*25+Piggy_Bank_Contenet.Dollars*100;

    return Total_Pennies;
}

int main()
{
    int Total_Pennies=Calculate_Total_Pennies(Read_Piggy_Bank_Contenet());

    cout<<endl<<"Total Pennies= "<<Total_Pennies<<endl;
    cout<<endl<<"Total Dollars= "<<(float)Total_Pennies/100<<endl;

    return 0;
}