#include<iostream>
using namespace std;

int main()
{
    try
    {
        int n1,n2;
        char c;
        cout<<"Perform arthmetic operation...."<<endl;
        cout<<"Enter Two number: "<<endl;
        cin>>n1>>n2;
        cout<<"Enter Operator: ";
        cin>>c;
        if(c!='*' && c!='+' && c!='-' && c!='/')
        {
            throw c;
        }
        switch(c)
        {
            case '/':
                if(n2==0)
                {
                    throw(n2);
                }
                cout<<"Division is "<<n1/n2<<endl;
                break;
            case '*':
                cout<<"Multiplication is "<<n1*n2<<endl;
                break;
            case '-':
                cout<<"Subtraction is "<<n1-n2<<endl;
                break;
            case '+':
                cout<<"Addition is "<<n1+n2<<endl;
                break;
        }
    }
    catch(const int n)
    {
        cout<<n<<" is not valid"<<endl;
    }
    catch(const char p)
    {
        cout<<p<<" is not arthmetic operator"<<endl;
    }
    return 0;
}