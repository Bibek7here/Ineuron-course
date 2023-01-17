#include<iostream>
using namespace std;
class Area
{
    private:
        int length,breadth;
        float radius,area;
    public: 
        void SetRadius(float r)
        {
            radius=r;
        }
        void SetSquare(int l)
        {
            length=l;
        }
        void SetRectangleData(int a, int b)
        {
            length=a;
            breadth=b;
        }
        int GetLength()
        {
            return length;
        }
        int Getbreadth()
        {
            return breadth;
        }
        float GetRadius()
        {
            return radius;
        }
        float GetArea()
        {
            return area;
        }
        void SquareArea()
        {
            area=length*length;
        }
        void RectangleArea()
        {
            area=length*breadth;
        }
        void CircleArea()
        {
            area=3.14*radius*radius;
        }

};
int main()
{
    Area find;
    int length,breadth;
    float radius;
    cout<<"Enter length of a square: ";
    cin>>length;
    find.SetSquare(length);
    find.SquareArea();
    cout<<"Area of square with length "<<find.GetLength()<<" is "<<find.GetArea();
    cout<<"\nEnter length and breadth of a rectangle: ";
    cin>>length>>breadth;
    find.SetRectangleData(length,breadth);
    find.RectangleArea();
    cout<<"\nArea of rectangle with length "<<find.GetLength()<<" and breadth "<<find.Getbreadth()<<" is "<<find.GetArea();
    cout<<"\nEnter radius of a circle: ";
    cin>>radius;
    find.SetRadius(radius);
    find.CircleArea();
    cout<<"\nArea of circle with radius "<<find.GetRadius()<<" is "<<find.GetArea();
    return 0;
}