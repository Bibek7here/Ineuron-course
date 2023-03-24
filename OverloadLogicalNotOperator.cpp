#include<iostream>
using namespace std;
class Integer
{
    private:
        int number;
    public:
        void SetData(int n)
        {
            number=n;
        }
        Integer operator!()
        {
            Integer I;
            I.number=!number;
            return I;
        }
        int GetNumber()
        {
            return number;
        }
};
int main()
{
    Integer I,I1;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    I.SetData(n);
    I1=!I;
    cout<<"\nInteger number after NOT: "<<I1.GetNumber();
    return 0;
}