#include<iostream>
using namespace std;
class Fraction
{
    private:
        long numerator;
        long denominator;

    public:
        Fraction(long n=0, long d=0)
        {
            numerator=n;
            denominator=d;
        }
        void SetData(int a, int b)
        {
            numerator=a;
            denominator=b;
        }
        Fraction operator++()
        {
            Fraction F;
            F.numerator=++numerator;
            F.denominator=++denominator;
            return F;
        }
        Fraction operator++(int)
        {
            Fraction F;
            F.numerator=numerator++;
            F.denominator=denominator++;
            return F;
        }
        friend void operator<<(Fraction,int );
        friend int operator>>(Fraction,int);
        int GetNumerator()
        {
            return numerator;
        }
        int GetDenominator()
        {
            return denominator;
        }
};
int operator>>(Fraction F1, int a)
{
    cin>>a;
    return a;
}
void operator<<(Fraction F1,int a)
{
    cout<<a<<"/"<<F1.denominator<<endl;
}
int main()
{
    Fraction F1,F2;
    int numerator,denominator;
    cout<<"F1  :"<<F1.GetNumerator()<<"/"<<F1.GetDenominator()<<endl;
    cout<<"F2  :"<<F2.GetNumerator()<<"/"<<F2.GetDenominator()<<endl;
    cout<<"\nEnter 1ST Fraction Value";
    cout<<"\nNumeraotr    :";
    numerator=F1>>numerator;
    cout<<"\nDenominator  :";
    denominator=F1>>denominator;
    F1.SetData(numerator,denominator);
    F1++;
    cout<<"\nF1++  :";
    F1<<F1.GetNumerator();
    ++F1;
    cout<<"\n++F1  :";
    F1<<F1.GetNumerator();
    F2=++F1;
    cout<<"\nF2=++F1"<<endl;
    cout<<"F1  : ";
    F1<<F1.GetNumerator();
    cout<<"F2  : ";
    F2<<F2.GetNumerator();
    F2=F1++;
    cout<<"\nF2= F1++"<<endl;
    cout<<"F1  : ";
    F1<<F1.GetNumerator();
    cout<<"F2  : ";
    F2<<F2.GetNumerator();
    return 0;
}