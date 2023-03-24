#include<iostream>
using namespace std;
class Rectangle
{
    public:
        float area(int len, int breadth)
        {
            return len*breadth;
        }
        float area(double len, double breadth)
        {
            return len*breadth;
        }
};
int main()
{
    int area1;
    float area2;
    Rectangle r;
    area1=r.area(3,4);
    area2=r.area(3.14,4.13);
    cout<<"Area of first rectangel is "<<area1<<endl;
    cout<<"Area of second rectangel is "<<area2<<endl;
    return 0;
}