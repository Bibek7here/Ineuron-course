#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter two number: ";
    cin>>n1>>n2;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    cout<<"\nValues after swap is "<<n1<<" and "<<n2;
    return 0;
}