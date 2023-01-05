//Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int fibo(int);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(fibo(n)==0)
    {
        cout<<n<<" is a term in a fibonacci series";
    }
    else
    {
        cout<<n<<" is not a term in a fibonacci series";
    }
    return 0;
}
int fibo(int num)
{
    int first=1,second=1,third,i,temp;
    if(num==0 || num==second)
    {
        return 0;
    }
    for(i=0; i<20; i++)
    {
        temp=0;
        third=first+second;
        if(num==third)
        {
            return 0;
        }
        first=second;
        second=third;
    }
    return 1;
}