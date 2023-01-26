#include<iostream>
using namespace std;
class Student
{
    private:
        int roll;
        char name[20];
        char address[30];
    public:
        Student()
        {
            cout<<"Enter roll: ";
            cin>>roll;
            cin.ignore();
            cout<<"\nEnter name: ";
            cin.getline(name,20);
            cout<<"\nEnter address: ";
            cin.getline(address,30);
        }
        int GetRoll()
        {
            return roll;
        }
        char *GetName()
        {
            return name;
        }
        char *GetAddress()
        {
            return address;
        }
        void ShowData()
        {
            cout<<"\nRoll number: "<<roll<<"\n name: "<<name<<"\n Address: "<<address;
        }
};
int main()
{
    Student s1;
    s1.ShowData();
    return 0;
}