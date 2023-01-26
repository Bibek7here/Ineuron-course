#include<iostream>
using namespace std;
class Box
{
    private:
        int length,breadth,height,volume;
    public:
        Box(int a, int b, int c)
        {
            length=a;
            breadth=b;
            height=c;
        }
        int GetLength()
        {
            return length;
        }
        int GetBreadth()
        {
            return breadth;
        }
        int Getheight()
        {
            return height;
        }
        int GetVolume()
        {
            return volume;
        }
        void CalculateVolume()
        {
            volume=length*breadth*height;
        }
};
int main()
{
    int l,b,h;
    cout<<"Enter length, breadth, and height: ";
    cin>>l>>b>>h;
    Box b1(l,b,h);
    b1.CalculateVolume();
    cout<<"\nVolume of Box is "<<b1.GetVolume();
    return 0;
}