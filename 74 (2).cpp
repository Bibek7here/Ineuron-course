#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length,breadth,area;
    public: 
        void SetData(int l, int b)
        {
            length=l;
            breadth=b;
        }
        int GetLength()
        {
            return length;
        }
        int Getbreadhth()
        {
            return breadth;
        }
        int GetArea()
        {
            return area;
        }
        void CalculateArea()
        {
            area=length*breadth;
        }
};
int main()
{
    Rectangle rect;
    int l,b;
    cout<<"Enter length and breadth: ";
    cin>>l>>b;
    rect.SetData(l,b);
    rect.CalculateArea();
    cout<<"\nArea of rectangle with length "<<rect.GetLength()<<" and breadth "<<rect.Getbreadhth()<<" is "<<rect.GetArea();
    return 0;
}