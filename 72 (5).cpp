#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter two number : ";
    cin>>n1>>n2;
    if(n1>n2)
    {
        cout<<n1<<" is maximum";
    }
    else
    {
        cout<<n2<< " is maximum";
    }
    return 0;
}