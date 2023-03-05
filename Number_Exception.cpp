
#include<iostream>
using namespace std;
int main()
{
    char number[11];
    try
    {
        int count=0;
        cout<<"Enter Your number: "<<endl;
        cin>>number;
        for(int i=0; number[i]; i++)
        {
            count++;
        }
        if(count!=10)
        {
            throw(number);
        }
        cout<<"Your number is "<<number<<endl;
    }
    catch(const char* Num)
    {
        cout<<Num<<" is not valid"<<endl;
    } 
    return 0;
}