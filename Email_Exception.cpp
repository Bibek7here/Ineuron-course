#include<iostream>
using namespace std;
int main()
{
    char S1[30];
    cout<<"Enter Email address: "<<endl;
    cin>>S1;
    try
    {
        int temp=0;
        for(int i=0; S1[i]; i++)
        {
            if(S1[i]=='@')
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        {
            throw(S1);
        }
        cout<<"Your email address is "<<S1<<endl;
    }
    catch(const char* S)
    {
        cout<<S<<" invalid email address"<<endl;
    }
    
    return 0;
}