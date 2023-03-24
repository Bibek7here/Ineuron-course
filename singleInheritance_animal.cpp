#include<iostream>
using namespace std;
class Animal
{
    public:
        void sound()
        {
            cout<<"I produce animal sound"<<endl;
        }
};
class Dog:public Animal
{
    public:
        void sound()
        {
            cout<<"I'm Dog"<<endl;
        }
};
int main()
{
    Dog d;
    d.sound();
    return 0;
}