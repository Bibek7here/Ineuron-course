#include<iostream>
using namespace std;
class Bank
{
    private:
        int principal;
        float ROI,time,SI;
    public:
        void ReadData()
        {
            cout<<"Enter principal: ";
            cin>>principal;
            cout<<"\nEnter rate of interest: ";
            cin>>ROI;
            cout<<"\nEnter Time: ";
            cin>>time;
        }
        Bank()
        {
            ReadData();
        }
        int GetPrinciple()
        {
            return principal;
        }
        float GetROI()
        {
            return ROI;
        }
        float GetTime()
        {
            return time;
        }
        float GetSI()
        {
            return SI;
        }
        void CalculatSI()
        {
            SI=(principal*time*ROI)/100;
        }
};
int main()
{
    Bank b1;
    b1.CalculatSI();
    cout<<"\nPrinciple , Time and Rate of Interest is "<<b1.GetPrinciple()
    <<" "<<b1.GetTime()<<" "<<b1.GetROI()<<"Respectively";
    cout<<"\nSimple Interest is "<<b1.GetSI();
    return 0;
}