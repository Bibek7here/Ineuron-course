#include<iostream>
using namespace std;
class MyString
{
    private:
        char str[100];
    public:
        void SetData( char *);
        void operator!()
        {
            int i;
            for(i=0; str[i]; i++)
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    str[i]=str[i]-32;
                }
                else if(str[i]>='A' && str[i]<='Z')
                {
                    str[i]=str[i]+32;
                }
            }
        }
        char *GetData()
        {
            return str;
        }
};
void MyString::SetData(char *ptr)
{
    int i;
    for(i=0; ptr[i]; i++)
    {
        str[i]=ptr[i];
    }
    str[i]='\0';
}
int main()
{
    MyString S1;
    char name[100];
    cout<<"Enter string: ";
    cin.getline(name,100);
    S1.SetData(name);
    !S1;
    cout<<"\nString after Manipulation is "<<S1.GetData();
    return 0;
}