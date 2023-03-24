#include<iostream>
using namespace std;
class Person
{
    private:
        char name[30];
        int age;
    public:
        void SetName(const char* Name)
        {
            int i;
            for(i=0; Name[i]; i++)
            {
                name[i]=Name[i];
            }
            name[i]='\0';
        }
        void SetAge(const int Age)
        {
            age=Age;
        }
        int GetAge()
        {
            return age;
        }
        char* GetName()
        {
            return name;
        }
};
class Employee:public Person
{
    private:
        int empid;
        float salary;
    public:
        void SetEmployeeId(const int id)
        {
            empid=id;
        }
        void SetSalary(const float pay)
        {
            salary=pay;
        }
        int GetEmployeeId()
        {
            return empid;
        }
        float GetSalary()
        {
            return salary;
        }
};
int main()
{
    Employee E1;
    int Id,age;
    float salary;
    char name[30];
    cout<<"Enter name of Employee: "<<endl;
    cin.getline(name,30);
    cout<<"Enter Employee Id: "<<endl;
    cin>>Id;
    cout<<"Enter age: "<<endl;
    cin>>age;
    cout<<"Enter Salary: "<<endl;
    cin>>salary;
    E1.SetName(name);
    E1.SetAge(age);
    E1.SetEmployeeId(Id);
    E1.SetSalary(salary);
    cout<<"Employee Detail: "<<endl;
    cout<<"Name: "<<E1.GetName()<<endl;
    cout<<"Age: "<<E1.GetAge()<<endl;
    cout<<"Employee Id: "<<E1.GetEmployeeId()<<endl;
    cout<<"Salary: "<<E1.GetSalary()<<endl;
    return 0;
}
