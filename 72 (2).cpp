#include<iostream>
using namespace std;
int main()
{
    float length,height,breadth,volume;
    cout<<"Enter length, breadth and height of the cuboid: ";
    cin>>length>>breadth>>height;
    volume=length*breadth*height;
    cout<<"\nVolume of Cuboid is "<<volume;
    return 0;
}