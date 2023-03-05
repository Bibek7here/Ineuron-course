#include<iostream>
using namespace std;
int main()
{
    int n1,n2,result;
    try
    {
        cout<<"Enter Two number: "<<endl;
        cin>>n1>>n2;
        if(n2==0)
        {
            throw(n2);
        }
        else{
            result=n1/n2;
        }
        cout<<"Division of two number is "<<result<<endl;
    }
    catch(const int n)
    {
        cout<<n<<" is not valid"<<endl;
    }
    return 0;
}