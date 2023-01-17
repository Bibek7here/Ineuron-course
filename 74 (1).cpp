#include<iostream>
using namespace std;
class Greatest
{
    private:
        int n1,n2,n3;
        int largest;
    public: 
        void SetData(int a, int b, int c)
        {
            n1=a;
            n2=b;
            n3=c;
        }
        int GetN1()
        {
            return n1;
        }
        int GetN2()
        {
            return n2;
        }
        int GetN3()
        {
            return n3;
        }
        int GetLargest()
        {
            return largest;
        }
        void Findlargest()
        {
            if(n1>n2)
            {
                if(n1>n3)
                {
                    largest=n1;
                    return;
                }
            else
            {
                largest=n3;
                return;
            }
        }
        else
        {
            if(n2>n3)
            {
                largest=n2;
                return;
            }
            else
            {
                largest=n3;
                return;
            }
        }
        }
        
};
int main()
{
    Greatest find;
    int n1,n2,n3;
    cout<<"Enter three number: ";
    cin>>n1>>n2>>n3;
    find.SetData(n1,n2,n3);
    find.Findlargest();
    cout<<"\nLargest among "<<find.GetN1()<<" "<<find.GetN2()<<" "<<find.GetN3()<<" is "<<find.GetLargest();
    return 0;
}