#include<iostream>
#include<math.h>
#include<string>
using namespace std;

float Read_Square_Side()
{
    float A;

    cout<<"Please enter square side A?"<<endl;
    cin>>A;

    return A;
}
float Circle_Area_Inscribed_In_square(float A)
{
    const float PI=3.14;
    float Area=(PI*pow(A,2))/4;
    return Area;
}
void Print_Results(float Area)
{
    cout<<"\n Circle Area= "<<Area<<endl;
}
int main()
{
    
    Print_Results(Circle_Area_Inscribed_In_square(Read_Square_Side()));

    return 0;
}