#include<iostream>
#include<math.h>
#include<string>
using namespace std;

float Read_Radious()
{
    float R;

    cout<<"Please enter radious R?"<<endl;
    cin>>R;

    return R;
}
float Circle_Area(float R)
{
    const float PI=3.14;
    float Area=pow(R,2)*PI;
    return Area;
}
void Print_Results(float Area)
{
    cout<<"\n Circle Area= "<<Area<<endl;
}
int main()
{
    
    Print_Results(Circle_Area(Read_Radious()));

    return 0;
}