#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        friend istream &operator>>(istream &input,Complex &C);
        friend ostream &operator<<(ostream &output,Complex C);
};
ostream &operator<<(ostream &output, Complex C)
{
    output<<"\nReal number is "<<C.real<<" and imaginary number is "<<C.img;
    return output;
}
istream &operator>>(istream &input,Complex &C)
{
    input>>C.real>>C.img;
    cout<<C.real<<C.img;
    return input;
}
int main()
{
    Complex C1;
    int real,img;
    cout<<"\nEnter real and imaginary number:  ";
    cin>>C1;
    cout<<C1;
    return 0;
}