#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void Read_Numbers(float& A,float& H)
{

    cout<<"Please enter triangle base A?"<<endl;
    cin>>A;

    cout<<"Please enter triangle H?"<<endl;
    cin>>H;

}
float Triangle_Area(float A,float H)
{
    float Area;
    Area=(A/2)*H;
    return Area;
}
void Print_Results(float Area)
{
    cout<<"\n Triangle Area= "<<Area<<endl;
}
int main()
{
    float A,H;

    Read_Numbers(A,H);
    Print_Results(Triangle_Area(A,H));
    
    return 0;
}