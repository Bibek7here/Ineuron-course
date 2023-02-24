#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex(){}
        Complex(int x)
        {
            real=x;
            img=x+7;
        }
        void Display()
        {
            cout<<"Real is "<<real<<" and "<<" imaginary is "<<img<<endl;
        }
};
int main()
{
    Complex C1;
    int n=5;
    C1=n;
    C1.Display();
    return 0;
}