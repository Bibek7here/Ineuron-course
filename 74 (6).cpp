#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,sec;
    public:
        void setData(int h,int m, int s)
        {
            hour=h;
            min=m;
            sec=s;
        }
        void showdata()
        {
            cout<<"Time is "<<hour<<" hr "<<min<<" min "<<sec<<" sec";
        }
};
int main()
{
    Time t1;
    int hour,min,sec;
    cout<<"Enter hour,min and sec: ";
    cin>>hour>>min>>sec;
    t1.setData(hour,min,sec);
    t1.showdata();
    return 0;
}