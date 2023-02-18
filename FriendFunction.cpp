#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:    
        void SetData(int a, int b)
        {
            real=a;
            img=b;
        }
        friend Complex add(Complex,Complex);
        Complex operator+(Complex C)
        {
            Complex C1;
            C1.real=real+C.real;
            C1.img=img+C.img;
            return C1;
        }
        void GetData()
        {
            cout<<"Complex number is: "<<real<<" + "<<img<<"i"<<endl;
        }
};
Complex add(Complex C,Complex C1)
{
    Complex C2;
    C2=C+C1;
    return C2;
}
int main()
{
    int real,img;
    Complex C1,C2,C3;
    cout<<"Enter real and imaginary number: ";
    cin>>real>>img;
    C1.SetData(real,img);
    cout<<"Enter real and imaginary number for another one: ";
    cin>>real>>img;
    C2.SetData(real,img);
    C3=add(C1,C2);
    C3.GetData();
    return 0;
}
