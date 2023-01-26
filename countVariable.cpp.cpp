#include<iostream>
using namespace std;
class Counter
{
    private:
        static int count;
    public:
        Counter()
        {
            count++;
        }
        int Get_count()
        {
            return count;
        }
};
int Counter::count=0;
int main()
{
    Counter c1,c2;
    cout<<"\nCount is "<<c1.Get_count();
    return 0;
}