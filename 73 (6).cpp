//Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int primeornot(int);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(primeornot(n)==1)
    {
        cout<<"\nGiven number is prime";
    }
    else
    {
        cout<<"\nGiven number is not prime";
    }
    return 0;
}
int primeornot(int num)
{
    int i;
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}