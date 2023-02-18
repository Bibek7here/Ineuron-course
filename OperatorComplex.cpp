#include<iostream>
using namespace std;
class Complex
{
    private:
        int real, img;
    public:
        Complex(){}
        Complex(int a, int b)
        {
            real=a;
            img=b;
        }
        Complex operator+(Complex s)
        {
            Complex s1;
            s1.real=s.real+real;
            s1.img=s.img+img;
            return s1;
        }
        Complex operator-(Complex c)
        {
            Complex s;
            s.real=real+c.real;
            s.img=img+c.img;
            return s;
        }
        Complex operator*(Complex c)
        {
            Complex s;
            s.real=real*c.real;
            s.img=img*c.img;
            return s;            
        }
        Complex operator==(Complex C)
        {
            Complex s;
            if(real==C.real && img==C.img)
            {
                s.real=real;
                s.img=img;
            }
            else{
                s.real=0;
                s.img=0;
            }
            return s;

        }
        void Result()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }

};
int main()
{
    int real,img,r1,m1;
    cout<<"Enter real and imaginary number: ";
    cin>>real>>img;
    cout<<"\nEnter Second real and imaginary number: ";
    cin>>r1>>m1;
    Complex C(real,img),C1(r1,m1),C2,C3,C4,C5;
    C2=C+C1;
    C2.Result();
    C3=C-C1;
    C3.Result();
    C4=C*C1;
    C4.Result();
    C5=C==C1;
    C5.Result();
    return 0;
}