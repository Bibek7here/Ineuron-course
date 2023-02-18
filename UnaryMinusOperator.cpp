#include<iostream>
using namespace std;
class Numbers
{
    private:
        int x,y,z;
    public:
        void SetData(int a,int b, int c)
        {
            x=a;
            y=b;
            z=c;
        }
        int GetX()
        {
            return x;
        }
        int GetY()
        {
            return y;
        }
        int GetZ()
        {
            return z;
        }
        Numbers operator-()
        {
            Numbers N;
            N.x=-x;
            N.y=-y;
            N.z=-z;
            return N;
        }
};
int main()
{
    Numbers N1,N2;
    int a,b,c;
    cout<<"Enter three Negative numbers: ";
    cin>>a>>b>>c;
    N1.SetData(a,b,c);
    N2=-N1;
    cout<<"\nValues After Negate: "<<N2.GetX()<<" "<<N2.GetY()<<" "<<N2.GetZ();
    return 0;
}