#include<iostream>
using namespace std;
class A
{
    private:
        int n1,n2;
    public:
        void SetData(int n, int m)
        {
            n1=n;
            n2=m;
        }
        int GetN1()
        {
            return n1;
        }
        int GetN2()
        {
            return n2;
        }
};
class B:public A
{
    private:
        int sum,n,m;
    public:
        void Sum()
        {
            sum=GetN1()+GetN2();
        }
        int GetSum()
        {
            return sum;
        }
};
int main()
{
    int n1,n2;
    cout<<"Enter two number: "<<endl;
    cin>>n1>>n2;
    B number;
    number.SetData(n1,n2);
    number.Sum();
    cout<<"Sum is "<<number.GetSum()<<endl;
    return 0;
}