#include<iostream>
using namespace std;
class Shape
{
    private:
    double fig1,fig2;
    public:
        void Set_data1(double area)
        {
            fig1=area;
        }
        void Set_Data2(double area)
        {
            fig2=area;
        }
        double Get_area1()
        {
            return fig1;
        }
        double Get_area2()
        {
            return fig2;
        }
        virtual void Display_area()
        {
            
        }
};
class Square:public Shape
{
    public:
        void CalculateSquare(double length)
        {
            double area=length*length;
            Set_data1(area);
        }
        void Display_area()
        {
            cout<<"Area of square is "<<Get_area1()<<endl;
        }
};
class Parallelogram:public Shape
{
    public:
        void CalculateParallelogram(double b, double h)
        {
            double area=b*h;
            Set_Data2(area);
        }
        void Display_area()
        {
            cout<<"Area of parallelogram is "<<Get_area2()<<endl;
        }
};
int main()
{   
    Square s;
    Parallelogram p;
    double l,b,h;
    cout<<"Enter length of square: ";
    cin>>l;
    s.CalculateSquare(l);
    s.Display_area();
    cout<<"Enter base and height of parallelogram";
    cin>>b>>h;
    p.CalculateParallelogram(b,h);
    p.Display_area();
    return 0;
}