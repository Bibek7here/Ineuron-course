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
        operator int()
        {
            return real;
        }
};
int main()
{
    Complex C1;
    C1.SetData(3,4);
    int x;
    x=C1;
    cout<<x;
    return 0;
}