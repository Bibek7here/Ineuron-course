#include<iostream>
using namespace std;
class Shape
{
    private:
        double x,y;
    public:
        void Set_Data(double a, double b)
        {
            x=a;
            y=b;
        }
        double GetX()
        {
            return x;
        }
        double GetY()
        {
            return y;
        }
        virtual void DisplayArea()=0;
        virtual void Area()
        {

        }

};
class Triangle:public Shape
{
    private:
        double shape1;
    public:
        void DisplayArea()
        {
            cout<<"Area of triangle is "<<shape1<<endl;
        }
        void Area()
        {
            shape1=0.5*GetX()*GetY();
        }
};
class Rectangle:public Shape
{
    private:
        double shape2;
    public:
        void DisplayArea()
        {
            cout<<"Area of Rectangle is "<<shape2<<endl;
        }
        void Area()
        {
            shape2=GetX()*GetY();
        }
};
int main()
{
    Triangle T;
    int x,y;
    cout<<"Enter Length and breadth: ";
    cin>>x>>y;
    T.Set_Data(x,y);
    T.Area();
    T.DisplayArea();
    Rectangle R;
    cout<<"Enter height and breadth: ";
    cin>>x>>y;
    R.Set_Data(x,y);
    R.Area();
    R.DisplayArea();
    return 0;
}