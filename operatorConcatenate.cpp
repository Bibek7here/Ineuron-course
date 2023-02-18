#include<iostream>
#include<cstring>
using namespace std;
class CString
{
    private:
        char name[30];
    public:
        void SetData(char *data)
        {
            int i;
            for(i=0; data[i]; i++)
            {
                name[i]=data[i];
            }
            name[i]='\0';
        }
        CString operator+(CString C)
        {
            CString S;
            strcat(S.name,name);
            strcat(S.name,C.name);
            return S;
        }
        int operator==(CString S)
        {
            int value;
            value=strcmp(name,S.name);
            return value;
        }
        char *GetString()
        {
            return name;
        }
};
int main()
{
    CString S,S1,S2;
    char str[30],str1[30];
    char *ptr;
    int value;
    cout<<"Enter name: ";
    cin.getline(str,30);
    S.SetData(str);
    fflush(stdin);
    cout<<"\nEnter another name:";
    cin.getline(str1,30);
    S1.SetData(str1);
    S2=S+S1;
    cout<<"\nString after concetinate: "<<S2.GetString();
    value=S==S1;
    if(value==0)
    {
        cout<<"\nIt is same";
    }
    return 0;
}