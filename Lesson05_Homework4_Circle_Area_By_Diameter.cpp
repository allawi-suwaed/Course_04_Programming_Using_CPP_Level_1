#include<iostream>
#include<math.h>
#include<string>
using namespace std;

float Read_Diameter()
{
    float D;

    cout<<"Please enter Diameter D?"<<endl;
    cin>>D;

    return D;
}
float Circle_Area_By_Diameter(float D)
{
    const float PI=3.14;
    float Area=(pow(D,2)*PI)/4;
    return Area;
}
void Print_Results(float Area)
{
    cout<<"\n Circle Area= "<<Area<<endl;
}
int main()
{
    
    Print_Results(Circle_Area_By_Diameter(Read_Diameter()));

    return 0;
}