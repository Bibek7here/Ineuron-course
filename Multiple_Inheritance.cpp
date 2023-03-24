#include<iostream>
#include<cstring>
using namespace std;
class Worker
{
    protected:
        int code;
        char name[50];
        float salary;
    public:
        void SetCode(const int code)
        {
            this->code=code;
        }
        void SetName(const char* name)
        {
            strcpy(this->name,name);
        }
        void SetSalary(const float salary)
        {
            this->salary=salary;
        }
        int GetCode()
        {
            return code;
        }
        char* Getname()
        {
            return name;
        }
        float GetSalary()
        {
            return salary;
        }
};
class Officer
{
    protected:
        float DA,HRA;
    public:
        void SetDA(const float Da)
        {
            DA=Da;
        }
        void SetHRA(const float hra)
        {
            HRA=hra;
        }
        float GetDA()
        {
            return DA;
        }
        float GetHRA()
        {
            return HRA;
        }
};
class Manager:public Worker,public Officer
{
    private:
        float TA,GrossSalary;
    public:
        void CalculateTA()
        {
            TA=0.1*GetSalary();
        }
        void CalculateGrossSalary()
        {
            GrossSalary=GetSalary()+TA+GetDA()+GetHRA();
        }
        void Display()
        {
            cout<<"...................."<<endl;
            cout<<"    Manager Information"<<endl;
            cout<<"...................."<<endl;
            cout<<"code: "<<GetCode()<<endl;
            cout<<"Name: "<<Getname()<<endl;
            cout<<"Salary: "<<GetSalary()<<endl;
            cout<<"DA: "<<GetDA()<<endl;
            cout<<"HRA: "<<GetHRA()<<endl;
            cout<<"TA: "<<TA<<endl;
            cout<<"Gross Salary: "<<GrossSalary<<endl;
            cout<<"...................."<<endl<<endl;
        }
        friend istream& operator>>(istream& put, Manager& M);
};
istream& operator>>(istream& put, Manager& M)
{
    cout<<".........................."<<endl;
    cout<<"Enter code: ";
    put>>M.code;
    cout<<"Enter Name: ";
    put>>M.name;
    cout<<"Enter salary: ";
    put>>M.salary;
    cout<<"Enter DA: ";
    put>>M.DA;
    cout<<"Enter HRA: ";
    put>>M.HRA;
    M.CalculateTA();
    M.CalculateGrossSalary();
    cout<<"..........................."<<endl;
    return put;
}
int main()
{
    int n,i=0;
    cout<<"Enter manager count: ";
    cin>>n;
    Manager M[n];
    do 
    {
        cout<<"Enter Worker Information for "<<endl;
        cin>>M[i];
        i++;
    }while(i!=n);
    for(i=0; i<n; i++)
    {
        M[i].Display();
    }
    return 0;
}