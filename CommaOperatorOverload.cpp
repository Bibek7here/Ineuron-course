#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x,y,z;
    public:
        void SetData(int a, int b, int c)
        {
            x=a;
            y=b;
            z=c;
        }
        Coordinate operator,(Coordinate C1)
        {
            C1.x=x;
            C1.y=y;
            C1.z=z;
            return C1;
        }
        void Display()
        {
            cout<<"Coordinate are: "<<x<<","<<y<<" and "<<z<<endl;
        }
};
int main()
{
    Coordinate C1,C2,C3;
    int a,b,c;
    cout<<"Enter coordinate : ";
    cin>>a>>b>>c;
    C1.SetData(a,b,c);
    C3=(C1,C2);
    C3.Display();
    return 0;
}