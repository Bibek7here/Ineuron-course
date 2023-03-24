#include<iostream>
using namespace std;
class Marks
{
    private:
        int marks;
    public:
        void SetData( int a)
        {
            marks=a;
        }
        Marks *operator->()
        {
            return this ;
        }
        void Displaymarks()
        {
            cout<<marks<<endl;
        }
};
int main()
{
    Marks M1;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    M1->SetData(n);
    M1->Displaymarks();
    return 0;
}