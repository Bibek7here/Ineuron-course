#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        void setData(int a,int b)
        {
            real=a;
            img=b;
        }
        int GetReal()
        {
            return real;
        }
        int Getimg()
        {
            return img;
        }
        void ShowData()
        {
            cout<<"\nComplex number is "<<real<<" + "<<img<<"i";
        }
};
int main()
{
    Complex number;
    int real,img;
    cout<<"Enter real and imaginary number: ";
    cin>>real>>img;
    number.setData(real,img);
    number.ShowData();
    return 0;
}