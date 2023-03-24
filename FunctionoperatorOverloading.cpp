#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet,inches;
    public:
        Distance()
        {
        }
        Distance(int a, int b)
        {
            feet=a;
            inches=b;
        }
        void operator()(int a, int b, int c)
        {
            feet=a+c+5;
            inches=a+b+15;
        }
        void Dispaly()
        {
            cout<<"Feet is "<<feet<<" and inches is "<<inches<<endl;

        }
};
int main()
{
    Distance D1;
    int a,b,c;
    cout<<"Enter three number: "<<endl;
    cin>>a>>b>>c;
    D1(a,b,c);
    D1.Dispaly();
    return 0;
}