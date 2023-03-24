#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"A() default constructor called"<<endl;
        }
        A(int , int)
        {
            cout<<"A() parameterized constuctor called"<<endl;
        }
        void a()
        {
            cout<<"Hellow"<<endl;
        }
};
class B:public A
{
    public:
        B():A()
        {
            cout<<"B() default constructor called"<<endl;
        }
        B(int, int ):A(3,4)
        {
            cout<<"B() Parameterized constructor called"<<endl;
        }
};
int main()
{
    B b;
    B b1(3,4);
    return 0;
}