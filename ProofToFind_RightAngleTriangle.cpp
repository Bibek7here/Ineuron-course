#include<iostream>
using namespace std;
class Triangle
{
    private:
        int b,p,h;
    public:
        void SetSides(int x,int y, int z)
        {
            b=x;
            p=y;
            h=z;
        }
        int GetBase()
        {
            return b;
        }
        int GetPerpendicular()
        {
            return p;
        }
        int GetHypothesis()
        {
            return h;
        }
};
class Proof
{
    private:
        int a,b;
    public:
        void SetData(int x, int y)
        {
            a=x;
            b=y;
        }
        int GetSide1()
        {
            return a;
        }
        int GetSide2()
        {
            return b;
        }
};
class Compute:public Proof,public Triangle
{
    private:

    public:
        void Find()
        {
            int temp;
            temp=(GetSide1()*GetSide1())+(GetSide2()*GetSide2());
            if((GetHypothesis()*GetHypothesis())==temp)
            {
                cout<<"It is a right angled triangle"<<endl;
            }
            else 
            {
                cout<<"It is not right angled triangle"<<endl;
            }
        }
};
int main()
{
    Compute C;
    int a,b,c;
    cout<<"Enter base, perpendicular and hypothesis of a triangel: ";
    cin>>b>>a>>c;
    C.SetSides(a,b,c);
    C.SetData(b,a);
    C.Find();
    return 0;
}