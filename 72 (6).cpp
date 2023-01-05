#include<iostream>
using namespace std;
int main()
{
    int sum=0,arr[10],i;
    cout<<"Enter 10 number: ";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<10; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"\nSum of number of an array is "<<sum;
    return 0;
}