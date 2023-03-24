#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex(){}
        Complex(int a, int b)
        {
            real=a;
            img=b;
        }
        void operator=(Complex &C )
        {
            real=C.real;
            img=C.img;
        }
        void Display()
        {
            cout<<endl<<real<<" + "<<img<<"i";
        }
};
int main()
{
    int real,img;
    cout<<"Enter real and Imginary number: ";
    cin>>real>>img;
    Complex C(real,img),C2;
    C2=C;
    cout<<"\nComplex number of Second Object: ";
    C2.Display();
    return 0;
}