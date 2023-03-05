#include<iostream>
using namespace std;
int main()
{
    char Username[30];
    try
    {
        int character_count=0,digit_count=0,special_count=0;
        cout<<"Username: "<<endl;
        cin>>Username;
        for(int i=0; Username[i]; i++)
        {
            if((Username[i]>='a' && Username[i]<='z') || (Username[i]>='A' && Username[i]<='Z'))
            {
                character_count++;
            }
            else if(Username[i]>='0' && Username[i]<='9')
            {
                digit_count++;
            }
            else
            {
                special_count++;
            }
        }
        if(character_count<6 || digit_count==0 || special_count==0)
        {
            throw(Username);
        }
        cout<<"Your username is "<<Username<<endl;
    }
    catch(const char* name)
    {
        cout<<name<<" invalid username"<<endl;
    }
    
    return 0;
}