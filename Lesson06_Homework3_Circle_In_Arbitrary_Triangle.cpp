#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void Read_Triangle_Data(float& A,float& B,float& C)
{

    cout<<"Please enter triangle side A?"<<endl;
    cin>>A;

    cout<<"Please enter triangle side B?"<<endl;
    cin>>B;

    cout<<"Please enter triangle side C?"<<endl;
    cin>>C;
    
}
float Circle_Area_By_Arbitary_Triangle(float A,float B,float C)
{
    const float PI=3.14;
    float P;
    P=(A+B+C)/2;
    float T;
    T=(A*B*C)/(4*sqrt(P*(P-A)*(P-B)*(P-C))); 
    float Area=PI*pow(T,2);
    return Area;
}
void Print_Results(float Area)
{
    cout<<"\n Circle Area= "<<Area<<endl;
}
int main()
{
    float A,B,C;
    Read_Triangle_Data(A,B,C);
    Print_Results(Circle_Area_By_Arbitary_Triangle(A,B,C));

    return 0;
}