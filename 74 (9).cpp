#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
        int num,reverse;
    public:
        void SetNum(int n)
        {
            num=n;
        }
        int GetNum()
        {
            return num;
        }
        int Getreverse()
        {
            return reverse;
        }
        void CalculateReverse()
        {
            int result=0;
            while(num!=0)
            {
                result=result*10+num%10;
                num/=10;
            }
            reverse=result;
        }
};
int main()
{
    ReverseNumber num;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    num.SetNum(n);
    num.CalculateReverse();
    cout<<"\nReverse of "<<num.GetNum()<<" is "<<num.Getreverse();
    return 0;
}