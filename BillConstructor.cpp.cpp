#include<iostream>
using namespace std;
class Bill
{
    private:
        int unit;
        char name[30];
        float price;
    public:
        void Get(int,char *);
        char *GetName()
        {
            return name;
        }
        int GetUnit()
        {
            return unit;
        }
        float GetTotalAmt()
        {
            return price;
        }
        void CalculateBill();
};
void Bill::Get(int ut, char *name1)
{
    unit=ut;
    int i;
    for(i=0; name1[i]!='\0'; i++)
    {
        name[i]=name1[i];
    }
    name[i]='\0';
    
}
void Bill::CalculateBill()
{
    if(unit<100)
    {
        price=unit*1.20;
    }
    else if(unit>=100 && unit<200)
    {
        price=unit*2;
    }
    else 
    {
        price=unit*3;
    }
}
int main()
{
    int unit;
    char name[30];
    cout<<"Enter your name: ";
    cin.getline(name,30);
    cout<<"\nEnter total unit Electricity consumed: ";
    cin>>unit;
    Bill b1;
    b1.Get(unit,name);
    b1.CalculateBill();
    cout<<b1.GetName();
    cout<<"\nYour Total amount is "<<b1.GetTotalAmt();
    return 0;
}