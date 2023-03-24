#include<iostream>
#include<cstring>
using namespace std;
class Customer
{
    protected:
        char name[30];
        char Number[11];
    public:
        void SetName(const char* name)
        {
            strcpy(this->name,name);
        }
        void SetNumber(const char* number)
        {
            strcpy(Number,number);
        }
        char* GetName()
        {
            return name;
        }
        char* GetNumber()
        {
            return Number;
        }
};
class Depositor:public Customer
{
    protected:
        long accountNumber;
        double Balance;
    public:
        void SetAccountNumber(const long number)
        {
            accountNumber=number;
        }
        void SetAmount(const double Amt)
        {
            Balance=Amt;
        }
        long GetAccountNumber()
        {
            return accountNumber;
        }
        double GetBalance()
        {
            return Balance;
        }
};
class Loan:public Depositor
{
    private:
        int loan_no;
        long loanAmount;
    public:
        void SetLoanNumber(const int num)
        {
            loan_no=num;
        }
        void SetLoanAmount(const long amt)
        {
            loanAmount=amt;
        }
        int GetLoanNumber()
        {
            return loan_no;
        }
        long GetLoanAmout()
        {
            return loanAmount;
        }
        void Display()
        {
            cout<<"Details of customer"<<endl;
            cout<<endl<<"......................"<<endl;
            cout<<"Customer name        : "<<GetName()<<endl;
            cout<<"Customer phoner No   : "<<GetNumber()<<endl;
            cout<<"Customer A/C No      : "<<GetAccountNumber()<<endl;
            cout<<"Balance              : "<<GetBalance()<<endl;
            cout<<"........................."<<endl<<endl;
            cout<<"Loan Number          : "<<GetLoanNumber()<<endl;
            cout<<"Loan Amount          : "<<GetLoanAmout()<<endl;
            cout<<"........................."<<endl<<endl;
        }
        friend istream& operator >>(istream &Get,Loan &L1);
};
istream& operator>>(istream &Get,Loan &L1)
{
    cout<<"Enter customer name: ";
    Get>>L1.name;
    cout<<"Enter Customer Phone No: ";
    Get>>L1.Number;
    cout<<"Enter Customer A/C Number: ";
    Get>>L1.accountNumber;
    cout<<"Enter Balance: ";
    Get>>L1.Balance;
    cout<<"Enter Loan no: ";
    Get>>L1.loan_no;
    cout<<"Enter loan amount: ";
    Get>>L1.loanAmount;
    return Get; 
}
int main()
{
    int n,i=0;
    cout<<"Enter Number of customer detail you want to enter: ";
    cin>>n;
    Loan L[n];
    do
    {
        cin>>L[i];
        cout<<"......................."<<endl;
        i++;
    } while (i!=n);
    for(i=0; i<n; i++)
    {
        L[i].Display();
    }
    return 0;
}