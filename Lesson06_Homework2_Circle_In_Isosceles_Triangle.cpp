#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void Read_Triangle_Data(float& A,float& B)
{

    cout<<"Please enter triangle side A?"<<endl;
    cin>>A;

    cout<<"Please enter triangle side B?"<<endl;
    cin>>B;
    
}
float Circle_Area_By_Isosceles_Triangle(float A,float B)
{
    const float PI=3.14;
    float Area=PI*(pow(B,2)/4)*((2*A-B)/(2*A+B));
    return Area;
}
void Print_Results(float Area)
{
    cout<<"\n Circle Area= "<<Area<<endl;
}
int main()
{
    float A,B;
    Read_Triangle_Data(A,B);
    Print_Results(Circle_Area_By_Isosceles_Triangle(A,B));

    return 0;
}