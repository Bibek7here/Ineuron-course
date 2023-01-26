#include<iostream>
using namespace std;
class Cube
{
    private:
        int l,b,h,volume;
    public: 
        Cube(int x, int y, int z)
        {
            l=x;
            b=y;
            h=z;
        }
        int Getlength()
        {
            return l;
        }
        int Getbreadth()
        {
            return b;
        }
        int Getheight()
        {
            return h;
        }
        void ShowData()
        {
            cout<<"\nVolumer of Cube is "<<volume;
        }
        void CalculateVol()
        {
            volume=l*b*h;
        }
};
int main()
{
    int length,breadth,height;
    cout<<"Enter length, breadth and height: ";
    cin>>length>>breadth>>height;
    Cube c1(length,breadth,height);
    c1.CalculateVol();
    c1.ShowData();
    return 0;
}