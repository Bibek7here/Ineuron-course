#include<iostream>
using namespace std;
class StaticCount
{
    private:
        static int count;
    public:
        static int GetCount()
        {
            return count;
        }
        void Increment()
        {
            count++;
        }
};
int StaticCount::count=0;
int main()
{
    StaticCount s1;
    s1.Increment();
    s1.Increment();
    s1.Increment();
    cout<<"Result is "<<s1.GetCount();
    return 0;
}