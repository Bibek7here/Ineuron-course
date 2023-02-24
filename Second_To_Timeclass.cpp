#include<iostream>
using namespace std;
class Time
{
    private:
        int minute,hour;
    public:
        Time()
        {

        }
        Time(int a)
        {
            minute=a/60;
            hour=minute/60;
            if(hour>0)
            {
                minute%=60;

            }
        }
        void Display()
        {
            cout<<"Time : "<<hour<<"hour and "<<minute<<"minute"<<endl;
        }
};
int main()
{
    int duration;
    cout<<"Enter time duration in second: "<<endl;
    cin>>duration;
    Time T1=duration;
    T1.Display();
    return 0;
}