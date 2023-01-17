#include<iostream>
using namespace std;
class Square
{
    private:
        int n;
        int square;
        static int count;
    public:
        void SetData(int a)
        {
            n=a;
        }
        int GetN()
        {
            return n;
        }
        int GetSquare()
        {
            return square;
        }
        static int Getcount()
        {
            return count;
        }
        void CalculateSquare()
        {
            count++;
            square=n*n;
        }
};
int Square::count=0;
int main()
{
    Square first,second;
    int n1,n2;
    cout<<"Enter a number to find square: ";
    cin>>n1;
    first.SetData(n1);
    first.CalculateSquare();
    cout<<"\nSquare of "<<first.GetN()<<" is "<<first.GetSquare();
    cout<<"Enter another nummber: ";
    cin>>n2;
    second.SetData(n2);
    second.CalculateSquare();
    cout<<"\nSquare of "<<second.GetN()<<" is "<<second.GetSquare();
    cout<<"\nThe function is called "<<Square::Getcount();
    return 0;
}