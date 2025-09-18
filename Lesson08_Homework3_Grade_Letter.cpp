#include<iostream>
using namespace std;

int Read_Number_In_Range(int From,int To)
{
    int Grade;

    do
    {
        cout<<"Please enter a Grade between 0 and 100?"<<endl;
        cin>>Grade;
    }while(Grade<From||Grade>To);

    return Grade;
}

char Get_Grade_Letter(int Grade)
{
    if (Grade>=90)
    return 'A';

    else if (Grade>=80)
    return 'B';

    else if (Grade>=70)
    return 'C';

    else if (Grade>=60)
    return 'D';

    else if (Grade>=50)
    return 'E';

    else 
    return'F';
}

void Print_Results(char Result)
{
    cout<<"Result= "<<Result<<endl;
}

//! To get rid of the above function, do the following:
/*
int main()
{
   int Read_Number=Read_Number_In_Range(0,100);

   cout<<"Result= "<<Get_Grade_Letter(Read_Number)<<endl;

   return 0;
}
*/

int main()
{
    Print_Results(Get_Grade_Letter(Read_Number_In_Range(0,100)));

    return 0;
} 