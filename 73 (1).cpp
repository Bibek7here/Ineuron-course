//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int *, int *);
int main()
{
    int n1,n2;
    cout<<"Enter two number: ";
    cin>>n1>>n2;
    swap(n1,n2);
    cout<<"\nValue after swapped: "<<n1<<" and "<<n2;
    return 0;
}
void swap(int &ptr1,int &ptr2)
{
    int temp;
    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;
}