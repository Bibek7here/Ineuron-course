#include<iostream>
using namespace std;
class Invent1
{
    private:
        float x,y;
    public:
        void SetData(float a, float b)
        {
            x=a;
            y=b;
        }
        Invent1()
        {

        }
        Invent1(float a, float b)
        {
            x=a;
            y=b;
        }
        operator float()
        {
            return x+y;
        }
        void Display()
        {
            cout<<"Values: "<<x<<" "<<y<<endl;
        }
        float GetX()
        {
            return x;

        }
        float GetY()
        {
            return y;
        }
};
class Invent2
{
    private:
        float x,y;
    public:
        void SetData(float a, float b)
        {
            x=a;
            y=b;
        }
        Invent2()
        {

        }
        Invent2(Invent1 I1)
        {
            x=I1.GetX();
            y=I1.GetY();
        }
        void Display()
        {
            cout<<"Values: "<<x<<" "<<y<<endl;
        }
};
int main()
{
    Invent1 S1(7,8);
    Invent2 D1;
    float tv;
    tv=S1;
    D1=(Invent2)S1;
    D1.Display();
    return 0;
}