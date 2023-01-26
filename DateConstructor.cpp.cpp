#include<iostream>
using namespace std;
class Date
{
    private:
        int year,month,day; 
    public: 
        Date(int y,int m, int d)
        {
            year=y;
            month=m;
            day=d;
        }
        int GetYear()
        {
            return year;
        }
        int GetMonth()
        {
            return month;
        }
        int GetDay()
        {
            return day;
        }
        void DisplayData()
        {
            cout<<"\nDate: "<<year<<":"<<month<<":"<<day;
        }
};
int main()
{
    int year,month,day;
    cout<<"Enter year, month and day: ";
    cin>>year>>month>>day;
    Date(year,month,day);
    Date date(year,month,day);
    date.DisplayData();
    return 0;
}