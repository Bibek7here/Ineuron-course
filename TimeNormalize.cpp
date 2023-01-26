#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void SetTime(int hour,int min, int sec)
        {
            h=hour;
            m=min;
            s=sec;
        }
        void ShowTime()
        {
            cout<<"Time is: "<<h<<"Hour "<<m<<" minutes"<<" and "<<s<<"seconds";
        }
        void Normalize();
        //Another method
        // void Normalize()
        // {
        //     m=m+s/60;
        //     s%=60;
        //     h=h+m/60;
        //     m%=60;
        // }
        Time add(Time t1)
        {
            Time t2;
            t2.h=h+t1.h;
            t2.m=m+t1.m;
            t2.s=s+t1.s;
            t2.Normalize();
            return t2;
        }
};
void Time::Normalize()
{
    if(s>60)
    {
        while(s>60)
        {
            s-=60;
            m++;
        }
    }
    if(m>60)
    {
        while (m>60)
        {
            m-=60;
            h++;
        }        
    }
}
int main()
{
    Time t1,t2,t3;
    int hour,min,sec;
    cout<<"Enter hour, min and sec : ";
    cin>>hour>>min>>sec;
    t1.SetTime(hour,min,sec);
    cout<<"\nEnter another hour, time and sec: ";
    cin>>hour>>min>>sec;
    t2.SetTime(hour,min,sec);
    t3=t1.add(t2);
    cout<<"\nTime after added: ";
    t3.ShowTime();
    return 0;
}