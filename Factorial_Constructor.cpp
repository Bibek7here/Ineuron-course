#include<iostream>
using namespace std;
int CalculateFactorial(int);
class Number
{
    private:
        int num;
    public:
        void SetNumber(int n)
        {
            num=n;
        }
        int GetNumber()
        {
            return num;
        }
};
class Factorial:public Number
{
    private:
        int fact;
    public:
        Factorial(Number& N)
        {
            fact=CalculateFactorial(N.GetNumber());
        }
        // int CalculateFactorial(int n)
        // {
        //     int temp=1,i;
        //     for(i=1; i<=n; i++)
        //     {
        //         temp=i*temp;
        //     }
        //     return temp;
        // }
        int GetFactorial()
        {
            return fact;
        }
};
int CalculateFactorial(int n)
{
    int temp=1,i;
    for(i=1; i<=n; i++)
    {
        temp=i*temp;
    }
    return temp;
}
int main()
{
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    Number num;
    num.SetNumber(n);
    Factorial f=num;
    cout<<"Factorial of Given number is "<<f.GetFactorial()<<endl;
    return 0;
}