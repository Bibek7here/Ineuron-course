#include<iostream>
using namespace std;
class Addition
{
    public:
        int add(int a,int b, int c=0)
        {
            return a+b+c;
        }
        double add(double a, double b, double c=0)
        {
            return a+b+c;
        }
};
int main()
{
    Addition a;
    int sum=a.add(5,6);
    cout<<"sum is "<<sum<<endl;
    double sum1=a.add(5.3,4.3,44.2);
    cout<<"sum of decimal number is "<<sum1;
    return 0;
}