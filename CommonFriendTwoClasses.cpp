#include<iostream>
#include<cstring>
using namespace std;
class Student;
class Person
{
    private:
        int age;
        char name[30];
    public:
        void SetAge(const int age)
        {
            this->age=age;
        }
        void SetName(const char* name)
        {
            strcpy(this->name,name);
        }
        int GetAge()
        {
            return age;
        }
        char* GetName()
        {
            return name;
        }
        friend void College(Person &P1, Student &S1);
};
class Student
{
    private:
        int age;
        char name[30];
    public:
        void SetAge(const int age)
        {
            this->age=age;
        }
        void SetName(const char* name)
        {
            strcpy(this->name,name);
        }
        int GetAge()
        {
            return age;
        }
        char* GetName()
        {
            return name;
        }
        friend void College(Person &P1, Student &S1);
};
void College(Person &P1, Student &S1)
{
    strcpy(P1.name,S1.name);
    P1.age=S1.age;
}
int main()
{
    int age;
    char name[30];
    Student s;
    cout<<"Enter name of Student: "<<endl;
    cin.getline(name,30);
    cout<<"Enter age: ";
    cin>>age;
    s.SetName(name);
    s.SetAge(age);
    Person P;
    College(P,s);
    cout<<"Private values after Exchange: "<<endl;
    cout<<"Nama is "<<P.GetName()<<" and age is "<<P.GetAge();
    return 0;
}