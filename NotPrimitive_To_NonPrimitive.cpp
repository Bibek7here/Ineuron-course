#include<iostream>
using namespace std;
class Product
{
    private:
        int x,y;
    public:
        void SetData(int a, int b)
        {
            x=a;
            y=b;
        }
        Product()
        {

        }
        void Display()
        {
            cout<<"Product is "<<x<<" and "<<y<<endl;
        }
        int GetX()
        {
            return x;
        }
        int GetY()
        {
            return y;
        }
};
class Item
{
    private:
        int x;
    public:
        Item(){}
        Item(Product P1)
        {
            x=P1.GetX();
        }
        void Display()
        {
            cout<<"Item is "<<x<<endl;
        }
};
int main()
{
    Item I1;
    Product P1;
    P1.SetData(3,4);
    I1=(Item)P1;
    I1.Display();
    return 0;
}