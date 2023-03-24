#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex(){}
        Complex(Complex &C)
        {
            real=C.real;
            img=C.img;
        }
        void SetData(int real, int img)
        {
            this->real=real;
            this->img=img;
        }
        int GetReal()
        {
            return real;
        }
        int GetImginary()
        {
            return img;
        }
};
int main()
{
    int real,img;
    cout<<"Enter real and imgaginary number: ";
    cin>>real>>img;
    Complex C1; //Default Consturctor
    C1.SetData(real,img);
    Complex C2=C1; //Copy constructor
    cout<<"\n"<<C2.GetReal()<<" + "<<C2.GetImginary()<<"i";
    return 0;
}