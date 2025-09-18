#include<iostream>
using namespace std;

int Read_Total_Sales()
{
     int Total_Sales;
     cout<<"Please enter a total sales?"<<endl;
     cin>>Total_Sales;

     return Total_Sales;
}

float Get_Comission_Percentage(float Total_Sales)
{
    if(Total_Sales>=1000000)
    return 0.01;
    else if(Total_Sales>=500000)
    return 0.02;
    else if(Total_Sales>=100000)
    return 0.03;
    else if(Total_Sales>=50000)
    return 0.05;
    else
    return 0.00;
}

float Calculate_Total_Comission_Percentage(float Total_Sales)
{
    return Get_Comission_Percentage(Total_Sales)*Total_Sales;
}

int main()
{
    float Total_Sales=Read_Total_Sales();

    cout<<endl<<"Comission Percentage= "<<Get_Comission_Percentage(Total_Sales)<<endl;
    cout<<endl<<"Total Comission= "<<Calculate_Total_Comission_Percentage(Total_Sales)<<endl;

    return 0;
}