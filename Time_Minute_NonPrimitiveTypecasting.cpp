#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,minute;
    public:
        Time()
        {

        }
        Time(int a,int b)
        {
            hour=a;
            minute=b;
        }
        void SetData(int a, int b)
        {
            hour=a;
            minute=b;
        }
        int GetHour()
        {
            return hour;
        }
        int GetMinute()
        {
            return minute;
        }
        void display()
        {
            cout<<"Hour is "<<hour<<" and minute is "<<minute<<endl;
        }
};
class Minute
{
    private:
        int minute;
    public:
        Minute()
        {

        }
        Minute(Time T1)
        {
            minute=T1.GetMinute();
        }
        Minute(int a)
        {
            minute=a;
        }
        void display()
        {
            cout<<"minute is "<<minute<<endl;
        }
};
int main()
{
    Time T1(7,40);
    T1.display();
    Minute M1;
    M1=(Minute)T1;
    M1.display();
    return 0;
}
