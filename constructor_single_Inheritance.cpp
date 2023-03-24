#include<iostream>
using namespace std;
class A
{
    private:
        int a;
    public:
        A(int n)
        {
            cout<<"A() parameterized constructor called"<<endl;
            a=n;
        }
        int GetA()
        {
            return a;
        }
};
class B:protected A
{
    private:
        int b;
    public:
        B():A(70)
        {
            cout<<"B() default constructor called"<<endl;
            b=GetA();
        }
        int GetB()
        {
            return b;
        }
};
int main()
{
    B b;
    cout<<"Value by default is "<<b.GetB();
    return 0;
}