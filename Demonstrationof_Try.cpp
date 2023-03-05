#include<iostream>
using namespace std;
int main()
{
    int i,n,div;
    string S1;
    try
    {
        cout<<"Enter Numbers: "<<endl;
        for(i=0; i<3; i++)
        {
            cin>>n;
            if(n==7)
            {
                throw(n);
            }
        }
        cout<<"Enter String: "<<endl;
        cin>>S1;
        if(S1=="Hello")
        {
            throw S1;
        }
    }
    catch(const int a)
    {
        cout<<"Cannot Divide Number by "<<a<<endl;
    }
    catch(string S)
    {
        cout<<S<<" is not acceptable"<<endl;
    }
    return 0;
}