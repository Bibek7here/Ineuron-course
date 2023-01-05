#include<iostream>
using namespace std;
#define PI 3.1415
int main()
{
    float radius,area;
    cout<<"Enter radius of a circle: ";
    cin>>radius;
    area=PI*radius*radius;
    cout<<"\nArea of circle with radius "<<radius<<" is "<<area;
    return 0;
}