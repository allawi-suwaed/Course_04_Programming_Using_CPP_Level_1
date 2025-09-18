#include<iostream>
#include<string>
using namespace std;

void Read_Numbers(float& A,float& B)
{

    cout<<"Please enter rectangle width A?"<<endl;
    cin>>A;

    cout<<"Please enter recangle Length B?"<<endl;
    cin>>B;

}
float Calculate_Rectangle_Area(float A,float B)
{
    return A*B;
}
void Print_Results(float Area)
{
    cout<<"\n Rectangle Area= "<<Area<<endl;
}
int main()
{
    float A,B;

    Read_Numbers(A,B);
    Print_Results(Calculate_Rectangle_Area(A,B));

    return 0;
}