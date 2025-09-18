#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void Read_Numbers(float& A,float& D)
{

    cout<<"Please enter rectangle side A?"<<endl;
    cin>>A;

    cout<<"Please enter recangle side D?"<<endl;
    cin>>D;

}
float Rectangle_Area_By_Side_And_Diagonal(float A,float D)
{
    float Area;
    Area=A*sqrt(pow(D,2)-pow(A,2));
    return Area;
}
void Print_Results(float Area)
{
    cout<<"\n Rectangle Area= "<<Area<<endl;
}
int main()
{
    float A,D;

    Read_Numbers(A,D);
    Print_Results(Rectangle_Area_By_Side_And_Diagonal(A,D));

    return 0;
}