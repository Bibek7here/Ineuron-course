//Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
float area(int);
float area(float,float);
int area(int,int);
int main()
{
    int radius,base,height;
    float length,breadth;
    cout<<"Enter radius of a circle: ";
    cin>>radius;
    cout<<"\nArea of circle is "<<area(radius);
    cout<<"\nEnter length and breadth of a rectangle: ";
    cin>>length>>breadth;
    cout<<"\nArea of rectangle is "<<area(length,breadth);
    cout<<"\nEnter base and height of triangle: ";
    cin>>base>>height;
    cout<<"\nArea of triangle is "<<area(base,height);
    return 0;
}
float area(int r)
{
    return 3.1415*r*r;
}
float area(float l, float b)
{
    return l*b;
}
int area(int b, int h)
{
    return (b*h)/2;
}