#include<iostream>
using namespace std;
class A
{
    private:
        int x;
    public:
        A(int a)
        {
            x=a;
        }
        void SetData(int a)
        {
            x=a;
        }
        A(){}
        int GetX()
        {
            return x;
        }

    
};
void SwapValue(A &c, A &d)
{
    int temp;
    temp=c.GetX();
    c.SetData(d.GetX());
    d.SetData(temp);
}
int main()
{
    int x,y;
    cout<<"Enter value in first object: ";
    cin>>x;
    cout<<"Enter value in second object: ";
    cin>>y;
    A a(x),b(y);
    SwapValue(a,b);
    cout<<"Value in first object after swap: "<<a.GetX()<<endl;
    cout<<"Value in second  object after swap: "<<b.GetX();
    return 0;
}