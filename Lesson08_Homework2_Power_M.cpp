#include<iostream>
#include<string>
using namespace std;

int Read_Number()
{
    int Number;

    cout<<"Please enter a Number?"<<endl;
    cin>>Number;

    return Number;
}

int Read_Power()
{
    int Power;

    cout<<"Please enter the Power?"<<endl;
    cin>>Power;

    return Power;
}

int Power_of_M(int M,int Number)
{
   if(M==0)
   {
    //Any number powered to zero gives 1
    return 1;
   }

   int P=1;

   for(int i=1;i<=M;i++)
   {

    P=P*Number;

   }
   cout<<endl<<"Result= ";
   return P;
}

int main()
{
    cout<<Power_of_M(Read_Power(),Read_Number())<<endl;

    return 0;
}