#include<iostream>
using namespace std;
int main()
{
    char Nickname[30];
    try
    {
        int character_count=0,digit_count=0,special_count=0,space_count=0;
        cout<<"Nickname: "<<endl;
        cin.getline(Nickname,30);
        for(int i=0; Nickname[i]; i++)
        {
            if((Nickname[i]>='a' && Nickname[i]<='z') || (Nickname[i]>='A' && Nickname[i]<='Z'))
            {
                character_count++;
            }
            else if(Nickname[i]>='0' && Nickname[i]<='9')
            {
                digit_count++;
            }
            else if(Nickname[i]==32)
            {
                space_count++;
            }
            else
            {
                special_count++;
            }
        }
        if(character_count>8 || digit_count>0 || special_count>0 || space_count>0)
        {
            throw(Nickname);
        }
        cout<<"Your nickname is "<<Nickname<<endl;
    }
    catch(const char* name)
    {
        cout<<name<<" invalid username"<<endl;
    }
    
    return 0;
}