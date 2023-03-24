#include<iostream>
using namespace std;
class Student
{
    protected:
        int St_id;
        char name[30];
    public:
};
class StudentExam:public Student
{
    protected:
        float S1,S2,S3,S4,S5,S6;
    public:
};
class StudentResult:public StudentExam
{
    private:
        float percentage;
    public:
        void CalculatePercentage()
        {
            percentage=(S1+S2+S3+S4+S5)/5;
        }
        void Display()
        {
            cout<<"Roll No: "<<St_id<<endl;
            cout<<"Student Name: "<<name<<endl<<endl;
            cout<<"Marks of Subject 1: "<<S1<<endl;
            cout<<"Marks of Subject 2: "<<S2<<endl;
            cout<<"Marks of Subject 3: "<<S3<<endl;
            cout<<"Marks of Subject 4: "<<S4<<endl;
            cout<<"Marks of Subject 5: "<<S5<<endl<<endl;
            cout<<"Total Percentage  : "<<percentage<<endl;
            cout<<"............................."<<endl;
        }
        friend istream& operator>>(istream& Get, StudentResult& S);
};
istream& operator>>(istream& Get, StudentResult& S)
{
    cout<<"..................."<<endl;
    cout<<"Enter Roll no   :";
    cin>>S.St_id;
    cout<<"Enter student name :";
    cin>>S.name;
    cout<<"Enter marks for subject 1: ";
    cin>>S.S1;
    cout<<"Enter marks for subject 2: ";
    cin>>S.S2;
    cout<<"Enter marks for subject 3: ";
    cin>>S.S3;
    cout<<"Enter marks for subject 4: ";
    cin>>S.S4;
    cout<<"Enter marks for subject 5: ";
    cin>>S.S5;
    S.CalculatePercentage();
    return Get;
}
int main()
{
    int n,i=0;
    cout<<"How many student result?"<<endl;
    cin>>n;
    StudentResult SR[n];
    do
    {
        cin>>SR[i];
        i++;
    } while (i!=n);
    cout<<".............................."<<endl;
    cout<<"         Student marklist     "<<endl;
    cout<<".............................."<<endl;
    for(i=0; i<n; i++)
    {
        SR[i].Display();
    }
    return 0;
}