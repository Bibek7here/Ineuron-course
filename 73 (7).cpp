//Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int check(int);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"\nHighest value digit in the number is "<<check(n);
    return 0;
}
int check(int num)
{
    int high;
    high=num%10;
    while(num!=0)
    {
        num/=10;
        high=high>(num%10)?high:(num%10);
    }
    return high;
}