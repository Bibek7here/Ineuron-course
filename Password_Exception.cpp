#include<iostream>
using namespace std;
int main()
{
    char Password[30];
    try
    {
        int lower_count=0,upper_count=0,digit_count=0,special_count=0;
        cout<<"Username: "<<endl;
        cin>>Password;
        for(int i=0; Password[i]; i++)
        {
            if(Password[i]>='a' && Password[i]<='z')
            {
                lower_count++;
            }
            else if(Password[i]>='A' && Password[i]<='Z')
            {
                upper_count++;
            }
            else if(Password[i]>='0' && Password[i]<='9')
            {
                digit_count++;
            }
            else
            {
                special_count++;
            }
        }
        if(lower_count<6 || digit_count==0 || special_count==0 || upper_count==0)
        {
            throw(Password);
        }
        cout<<"Your username is "<<Password<<endl;
    }
    catch(const char* Pass)
    {
        cout<<Pass<<" invalid username"<<endl;
    }
    
    return 0;
}