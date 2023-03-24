#include<iostream>
using namespace std;
class A
{
    private:
        int sum;
    public:
        void add(int a, int b)
        {
            sum=a+b;
        }
        void Displaysum()
        {
            cout<<"Sum is "<<sum<<endl;
        }
        A()
        {
            add(3,4);
        }
};
class B:public A
{
    private:
        int sub;
    public:
        void Substraction(int a, int b)
        {
            sub=a-b;
        }
        B()
        {
            Substraction(10,5);
        }
        void Displaysubstract()
        {
            cout<<"substraction is "<<sub<<endl;
        }
};
class C:public B
{
    public:
        C()
        {
            cout<<"C() default constructor called"<<endl;
        }
        
};
int main()
{
    C c;
    c.Displaysum();
    c.Displaysubstract();
    return 0;
}