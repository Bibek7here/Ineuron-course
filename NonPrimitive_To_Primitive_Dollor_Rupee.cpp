#include<iostream>
using namespace std;
class Rupee
{
    private:
        float rupee;
    public:
        Rupee()
        {

        }
        Rupee(float a)
        {
            rupee=a;
        }
        float GetRupee()
        {
            return rupee;
        }
        void Display()
        {
            cout<<"Rupee is "<<rupee<<endl;
        }
};
class Dollor
{
    private:
        float dollor;
    public:
        Dollor()
        {

        }
        Dollor(float a)
        {
            dollor=a;
        }
        Dollor(Rupee R1)
        {
            dollor=R1.GetRupee()/100;
        }
        operator Rupee()
        {
            return dollor*100;
        }
        void Display()
        {
            cout<<"Dollor is "<<dollor<<endl;
        }
};
int main()
{
    Rupee R1=100;
    Dollor D1=R1,D2=300;
    D1.Display();
    R1.Display();
    R1=D2;
    R1.Display();
    return 0;
}