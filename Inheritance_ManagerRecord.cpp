#include<iostream>
using namespace std;
class Person
{
    private:
        char name[30],address[30];
        string phone_no;
    public:
        void SetName(const char* nam)
        {
            int i;
            for(i=0; nam[i]; i++)
            {
                name[i]=nam[i];
            }
            name[i]='\0';
        }
        void SetAddress(const char* addres)
        {
            int i;
            for(i=0; addres[i]; i++)
            {
                address[i]=addres[i];
            }
            address[i]='\0';
        }
        void SetPhoneNumber(const string phone)
        {
            int i;
            for(i=0; phone[i]; i++)
            {
                phone_no[i]=phone[i];
            }
            phone_no[i]='\0';
        }
        char* Getname()
        {
            return name;
        }
        char* GetAddress()
        {
            return address;
        }
        string GetPhoneNUmber()
        {
            return phone_no;
        }
};
class Employee: public Person
{
    private:
        int EmployeeId;
    public:
        void SetEmployeeId(const int Id)
        {
            EmployeeId=Id;
        }
        int GetEmployeeId()
        {
            return EmployeeId;
        }
};
class Manager:public Employee
{
    private:
        string Designation,department;
        float salary;
    public:
        void SetDesignation(const string Design)
        {
            int i;
            for(i=0; Design[i]; i++)
            {
                Designation[i]=Design[i];
            }
            Designation[i]='\0';
        }
        void SetDepartment(const string depart)
        {
            int i;
            for(i=0 ; depart[i]; i++)
            {
                department[i]=depart[i];
            }
            department[i]='\0';
        }
        void SetSalary(const float salary)
        {
            this->salary=salary;
        }
        string GetDesignation()
        {
            return Designation;
        }
        string GetDepartment()
        {
            return department;
        }
        float GetSalary()
        {
            return salary;
        }
};
int main()
{
    int n,i=0;
    cout<<"How many Managers you want to Enter: "<<endl;
    cin>>n;
    Manager M[n];
    int Id;
    char name[30],address[30];
    string phone,designation,department;
    float salary;
    do
    {
        cout<<"Enter Details of Manager"<<endl;
        cout<<"......................"<<endl;
        cout<<"Enter Employee No.: ";
        cin>>Id;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter address: ";
        cin>>address;
        cout<<"Enter Phone NO.: ";
        cin>>phone;
        cout<<"Enter Designation: ";
        cin>>designation;
        cout<<"Enter department: ";
        cin>>department;
        cout<<"Enter salary: ";
        cin>>salary;
        M[i].SetEmployeeId(Id);
        M[i].SetName(name);
        M[i].SetAddress(address);
        M[i].SetPhoneNumber(phone);
        M[i].SetDesignation(designation);
        M[i].SetDepartment(department);
        M[i].SetSalary(salary);
        i++;
    } while (i!=n);
    float highestSalary=M[0].GetSalary();
    for(i=0 ;i<n; i++)
    {
        if(M[i].GetSalary()>highestSalary)
        {
            highestSalary=M[i].GetSalary();
        }
    }
    for(i=0 ;i<n ;i++)
    {
        if(M[i].GetSalary()==highestSalary)
        {
            cout<<"Manager with highest salary is "<<highestSalary<<" and, Manager name is "<<M[i].Getname();
            break;
        }
    }
    return 0;
}
