#include<iostream>
using namespace std;
class Data
{
    private:
        int number;
    public:
        void SetData(int a)
        {
            number=a;
        }
        Data operator++()
        {
            Data d;
            d.number=number+1;
            return d;
        }
        Data operator--()
        {
            Data d;
            d.number=number-1;
            return d;
        }
        void GetData()
        {
            cout<<"\nValues is "<<number;
        }
};
int main()
{
    Data d1,d2,d3;
    int n1;
    cout<<"Enter a number: ";
    cin>>n1;
    d1.SetData(n1);
    d2=++d1;
    cout<<"\nAfter increment: ";
    d2.GetData();
    d3=--d1;
    cout<<"\nAfter decrement: ";
    d3.GetData();
    return 0;
}