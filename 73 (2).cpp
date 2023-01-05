//Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int n1,n2,n3;
    cout<<"Enter three number: ";
    cin>>n1>>n2>>n3;
    cout<<"\nSum of first two number is "<<add(n1,n2);
    cout<<"\nSum of three number is "<<add(n1,n2,n3);
    return 0;
}
int add(int a,int b,int c)
{
    return (a+b+c);
}