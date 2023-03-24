#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
    private:
        int Employee_code;
        char name[50];
    public:
        void SetEmployeeCode(int code)
        {
            Employee_code=code;
        }
        void SetName(char* name)
        {
            strcpy(this->name,name);
        }
        int GetEmployeeCode()
        {
            return Employee_code;
        }
        char* GetName()
        {
            return name;
        }
};
class Full_time: public Employee
{
    private:
        int Number_of_days;
        float Daily_rate,salary;
    public:
        void SetNumberDays( const int days)
        {
            Number_of_days=days;
        }
        void SetDailyRate(const float rate)
        {
            Daily_rate=rate;
        }
        void CalculateSalary()
        {
            salary=Daily_rate*Number_of_days;
        }
        int GetNumberDays()
        {
            return Number_of_days;
        }
        float GetDailyRate()
        {
            return Daily_rate;
        }
        float GetSalary()
        {
            return salary; 
        }
        void Display()
        {
            cout<<"Employee Number: "<<GetEmployeeCode()<<endl;
            cout<<"Employee name: "<<GetName()<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"status: FullTime"<<endl;
            cout<<".................."<<endl;
        }
};
class Part_time:public Employee
{
    private:
        int Working_hour;
        float Hour_rate,salary;
    public:
        void SetWorkingHour(int hour)
        {
            Working_hour=hour;
        }
        void SetHourRate(const float rate)
        {
            Hour_rate=rate;
        }
        void CalculateSalary()
        {
            salary=Hour_rate*Working_hour;
        }
        int GetWorkingHour()
        {
            return Working_hour;
        }
        float GetHourRate()
        {
            return Hour_rate;
        }
        float GetSalary()
        {
            return salary;
        }
        void Display()
        {
            cout<<"Employee Number: "<<GetEmployeeCode()<<endl;
            cout<<"Employee name: "<<GetName()<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"status: PartTime"<<endl;
            cout<<".................."<<endl;
        }
};
void Record(int n)
{
    int EmpCode,Fcount=0,Pcount=0;
    char name[50],status;
    Full_time F1[n];
    Part_time P1[n];
    do
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Employee code: ";
        cin>>EmpCode;
        cout<<"Enter Status \n Full Time(f/F) and Part time(p/P): ";
        cin>>status;
        if(status=='f' || status=='F')
        {
            int Numberofday;
            float daily_rate;
            cout<<"Enter Number of Working day: ";
            cin>>Numberofday;
            cout<<"Enter Rate: ";
            cin>>daily_rate;
            F1[Fcount].SetName(name);
            F1[Fcount].SetEmployeeCode(EmpCode);
            F1[Fcount].SetNumberDays(Numberofday);
            F1[Fcount].SetDailyRate(daily_rate);
            F1[Fcount].CalculateSalary();
            Fcount++;
        }
        else if(status=='p'|| status=='P')
        {
            int Working_hour;
            float Rate_hour;
            cout<<"Enter Working hour: ";
            cin>>Working_hour;
            cout<<"Enter rate: ";
            cin>>Rate_hour;
            P1[Pcount].SetName(name);
            P1[Pcount].SetEmployeeCode(EmpCode);
            P1[Pcount].SetHourRate(Rate_hour);
            P1[Pcount].SetWorkingHour(Working_hour);
            P1[Pcount].CalculateSalary();
            Pcount++;
        }
        n--;
    }while(n!=0);
}
void DisplayRecord(int n)
{
    Part_time P1[n];
    Full_time F[n];
    for(int i=0; i<n; i++)
    {
        F[i].Display();
    }
    for(int i=0; i<n; i++)
    {
        P1[i].Display();
    }

}
int main()
{
    int choice;
    do
    {
        int n;
        cout<<"1.Enter Record"<<endl<<"2.Display Record"<<endl<<"3.Search Record"<<endl;
        cout<<"Ouit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                system("cls");
                int n;
                cout<<"How many Record?"<<endl;
                cin>>n;
                Record(n);
                break;
            case 2:
                system("cls");
                // DisplayRecord(n);
                Part_time P1;
                P1.Display();
                break;
            case 3:
            case 4:
                break;
            default:
                cout<<"Invalid Choice!!!";
        }
        
    } while (choice!=4);
    
    return 0;
}