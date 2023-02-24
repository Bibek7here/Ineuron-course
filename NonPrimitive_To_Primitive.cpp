#include<iostream>
using namespace std;
class Rupee
{
    private:
        int rupee;
    public:
        Rupee(){}
        Rupee(int a)
        {
            rupee=a;
        }
        operator int()
        {
            return rupee;
        }
        void display()
        {
            cout<<"Rupee is "<<rupee<<endl;
        }
};
int main()
{
    Rupee R1=70;
    int money=R1;
    cout<<"Value is "<<money<<endl;
    return 0;
}