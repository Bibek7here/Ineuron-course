#include<iostream>
using namespace std;
class FLOAT
{
    private:
        float num;
    public:
        FLOAT()
        {
            num=10.567;
        }
        float operator+(float n1)
        {
            return num+n1;
        }
        float operator-(float n1)
        {
            return num-n1;
        }
        float operator/(float n1)
        {
            return num/n1;
        }
        float operator*(float n1)
        {
            return num*n1;
        }
};
int main()
{
    float sum,sub,mul,div;
    FLOAT F1;
    sum=F1+5;
    sub=F1-6;
    mul=F1/7;
    div=F1*8;
    cout<<"Addition is "<<sum<<", substraction is "<<sub<<", multipliction is "<<mul<<" and division is "<<div;
    return 0;
}