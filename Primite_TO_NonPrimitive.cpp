#include<iostream>
using namespace std;
class Dollor
{
    private:
        int dollor;
    public:
        Dollor(){}
        Dollor(int a)
        {
            dollor=a;
        }
        void display()
        {
            cout<<"Dollor is "<<dollor<<endl;
        }
};
int main()
{
    int x=300;
    Dollor D1;
    D1=(Dollor)x;
    D1.display();
    return 0;
}