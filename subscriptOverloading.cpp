#include<iostream>
using namespace std;
class Array
{
    private:
        int a[70];
        const int size=70;
    public:
        void SetData(int n, int index)
        {
            if(index>=70)
            {
                cout<<"Array Index out of bound"<<endl;
                exit(0);
            }
            a[index]=n;
        }
        int operator[](int n)
        {
            if(n>=70)
            {
                cout<<"Array Index out of bound"<<endl;
                exit(0);
            }
            return a[n];
        }
};
int main()
{
    Array A;
    int index,num;
    cout<<"Enter number and index number of array: ";
    cin>>num>>index;
    A.SetData(num,index);
    cout<<"Value is "<<A[index];
    return 0;
}