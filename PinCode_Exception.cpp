#include<iostream>
using namespace std;
int main()
{
    char Pin[6];
    try
    {
        int count=0;
        cout<<"Enter Your area Pin code: "<<endl;
        cin>>Pin;
        for(int i=0; Pin[i]; i++)
        {
            count++;
        }
        if(count!=6)
        {
            throw(Pin);
        }
        cout<<"Pin code is "<<Pin<<endl;
    }
    catch(const char* pin)
    {
        cout<<pin<<" is not valid Pin code"<<endl;
    }
    
    return 0;
}