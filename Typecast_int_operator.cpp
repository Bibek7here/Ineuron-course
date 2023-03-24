#include<iostream>
using namespace std;
class Integer
{
    private:
        int x;
    public: 
        void SetData(int y)
        {
            x=y;
        }
        operator int()
        {
            return x;
        }
};
int main()
{
    Integer I;
    int x,y;
    cout<<"Enter a number:"<<endl;
    cin>>x;
    I.SetData(x);
    y=I;
    cout<<"Value after typecast is "<<y;
    return 0;
}