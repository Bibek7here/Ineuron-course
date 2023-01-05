//Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int powerof(int,int);
int main()
{
    int base,power;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter power: ";
    cin>>power;
    cout<<base<<" raised to the power "<<power<<" is "<<powerof(base,power);
    return 0;
}
int powerof(int x, int y)
{
    int i,result=1;
    for(i=1; i<=y; i++)
    {
        result=result*x;
    }
    return result;
}