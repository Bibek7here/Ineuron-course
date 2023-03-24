#include<iostream>
using namespace std;
class Subject
{
    private:
        float s1,s2,s3;
    public:
        void SetSubject(float a, float b, float c)
        {
            s1=a;
            s2=b;
            s3=c;
        }
        float GetSubject1()
        {
            return s1;
        }
        float GetSubject2()
        {
            return s2;
        }
        float GetSubject3()
        {
            return s3;
        }
};
class student:public Subject
{
    private:
        float total_marks;
    public:
        void SetTotalMark()
        {
            total_marks=GetSubject1()+GetSubject2()+GetSubject3();
        }
        float GetTotal()
        {
            return total_marks;
        }
};
class Result:public student
{
    private:
        float percentage;
    public:
        void Percentage()
        {
            percentage=GetTotal()/3;
        }
        float GetPercentage()
        {
            return percentage;
        }
};
int main()
{
    Result R;
    int s1,s2,s3;
    cout<<"Enter marks of three subject: ";
    cin>>s1>>s2>>s3;
    R.SetSubject(s1,s2,s3);
    R.SetTotalMark();
    R.Percentage();
    cout<<"Total percentage is "<<R.GetPercentage();
    return 0;
}