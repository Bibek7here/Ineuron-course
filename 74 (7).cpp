#include<iostream>
using namespace std;
class Factorial
{
    private:
        int n;
        int fact;
    public: 
        void Setdata(int a)
        {
            n=a;
        }
        int Get()
        {
            return n;
        }
        int GetFactorial()
        {
            return fact;
        }
        void CalcuFact()
        {
            int f=1,i;
            if(n<=0)
            {
                fact=1;
                return;
            }
            for(i=1; i<=n; i++)
            {
                f=f*i;
            }
            fact=f;
        }
};
int main()
{
    Factorial F;
    int n;
    cout<<"Enter a number to find factorial: ";
    cin>>n;
    F.Setdata(n);
    F.CalcuFact();
    cout<<"\nFactorial of "<<F.Get()<<" is "<<F.GetFactorial();
    return 0;
}