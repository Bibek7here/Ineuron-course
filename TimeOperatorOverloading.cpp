#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,minute,second;
    public:
        void SetData(int a, int b, int c)
        {
            hour=a;
            minute=b;
            second=c;
        }
        int operator>>( int a)
        {
            cin>>a;
            return a; 
        }
        void operator==(Time t)
        {
            if(hour==t.hour && minute==t.minute && second==t.second)
            {
                cout<<"\nTime is same";
            }
            else
            {
                cout<<"\nTime is not same";
            }
        }
        void operator<<(int a)
        {
            cout<<a;
        }

};
int main()
{
    Time T1,T2;
    int h,m,s;
    cout<<"Enter First Time"<<endl;
    cout<<"...................";
    cout<<"\nEnter Hour   :  ";
    h=T1>>h;
    cout<<"\nEnter Minute :  ";
    m=T1>>m;
    cout<<"\nEnter Second :  ";
    s=T1>>s;
    T1.SetData(h,m,s);
    cout<<"\nFirst Time";
    cout<<"\nHours   : ";
    T1<<h;
    cout<<"\nMinutes : ";
    T1<<m;
    cout<<"\nSeconds : ";
    T1<<s;
    cout<<"\n\nEnter Second Time"<<endl;
    cout<<"...................";
    cout<<"\nEnter Hour   :  ";
    h=T2>>h;
    cout<<"\nEnter Minute :  ";
    m=T2>>m;
    cout<<"\nEnter Second :  ";
    s=T2>>s;
    T2.SetData(h,m,s);
    cout<<"\nSecond Time";
    cout<<"\nHours   : ";
    T2<<h;
    cout<<"\nMinutes : ";
    T2<<m;
    cout<<"\nSeconds : ";
    T2<<s;
    cout<<endl;
    T1==T2;
    return 0;
}