#include<iostream>
using namespace std;
int main()
{
    char Email[30];
    try
    {
        int i,count,flag=0;
        string mail="gmail.com";
        cout<<"Enter Email: "<<endl;
        cin.getline(Email,30);
        for(i=0; Email[i]; i++)
        {
            if(Email[i]=='@')
            {
                count=i+1;
                for(int j=0; mail[j]; j++)
                {
                    if(Email[count++]!=mail[j])
                    {
                        throw(Email);
                    }
                }
                break;
            }
            else 
            {
                throw(Email);
            }
        }
        cout<<"Your Email is "<<Email<<endl;
    }
    catch(const char* Gmail)
    {
        cout<<Gmail<<" is not valid Email"<<endl;
    }
    
    return 0;
}