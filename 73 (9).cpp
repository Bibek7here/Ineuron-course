#include<iostream>
using namespace std;
int fact(int);
int combo(int,int);
void pascal(int);
int main()
{
    int n;
    cout<<"How many line?";
    cin>>n;
    pascal(n);
    return 0;
}
int fact(int num)
{
    int fact=1,i;
    for(i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combo(int n, int r)
{
    return (fact(n)/fact(n-r)/fact(r));
}
void pascal(int line)
{
    int i,j,k,r;
    for(i=0; i<line; i++)
    {
        k=1;
        r=0;
        for(j=0; j<2*line; j++)
        {
            if(j>=line-i && j<=line+i && k)
            {
                cout<<combo(i,r);
                r++;
                k=0;
            }
            else
            {
                cout<<"  ";
                k=1;
            }
        }
        cout<<endl;
    }
}