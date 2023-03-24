#include<iostream>
using namespace std;
class Area
{
    private:
        float a;
    public:
        void area()
        {
    
        }
        void SetArea(float n)
        {
            a=n;
        }
        float GetArea()
        {
            return a;
        }
};
class Triangle:public Area
{
    public:
        void area()
        {
            int b,h;
            cout<<"Enter breadth and height: ";
            cin>>b>>h;
            float result;
            result=0.5*b*h;
            SetArea(result);
        }
};
class rectangle:public Area
{
    public:
        void area()
        {
            int l,b;
            cout<<"Enter length and breadth: ";
            cin>>l>>b;
            float result;
            result=b*l;
            SetArea(result);
        }
};
class Circle:public Area
{
    public:
        void area()
        {
            int radius;
            cout<<"Enter radius: ";
            cin>>radius;
            float result;
            result=3.1415*radius*radius;
            SetArea(result);
        }
};
int main()
{
    int choice;
    do
    {
        cout<<"Enter choice:"<<endl;
        cout<<"1.Area of rectangle"<<endl;
        cout<<"2.Area of Triangle"<<endl;
        cout<<"3.Area of circle"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                rectangle r;
                r.area();
                cout<<"Area of rectangle is "<<r.GetArea()<<endl;
                break;
            case 2:
                Triangle t;
                t.area();
                cout<<"Area of triangle is "<<t.GetArea()<<endl;
                break;
            case 3:
                Circle c;
                c.area();
                cout<<"Area of circle is "<<c.GetArea()<<endl;
                break;
            case 4:
                break;
            default:
                cout<<"wrong Choice!!"<<endl;
        }
    }while(1);
    return 0;
}