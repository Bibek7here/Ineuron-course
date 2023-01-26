#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void SetData(int x,int y)
    {
        a=x;
        b=y;
    }
    void ShowData()
    {
        cout<<"\nComplex number is "<<a<<" + "<<b<<"i";
    }
    Complex add(Complex c1)
    {
        Complex c2;
        c2.a=c1.a+a;
        c2.b=c1.b+b;
        return c2;
    }
};
int main()
{
    Complex c1,c2,c3;
    int real,img;
    cout<<"Enter real and imaginary number: ";
    cin>>real>>img;
    c1.SetData(real,img);
    cout<<"\nEnter real and imaginary number for another: ";
    cin>>real>>img;
    c2.SetData(real,img);
    c3=c1.add(c2);
    c1.ShowData();
    c2.ShowData();
    cout<<"\nSum of two Complex number is: ";
    c3.ShowData();
    return 0;
}


