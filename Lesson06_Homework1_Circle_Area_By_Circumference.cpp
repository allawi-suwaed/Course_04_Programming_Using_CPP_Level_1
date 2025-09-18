#include<iostream>
#include<math.h>
#include<string>
using namespace std;

float Read_circumference()
{
    float L;

    cout<<"Please enter circumference?"<<endl;
    cin>>L;

    return L;
}
float Circle_Area_By_circumference(float L)
{
    const float PI=3.14;
    float Area=pow(L,2)/(4*PI);
    return Area;
}
void Print_Results(float Area)
{
    cout<<"\n Circle Area= "<<Area<<endl;
}
int main()
{
    
    Print_Results(Circle_Area_By_circumference(Read_circumference()));

    return 0;
}