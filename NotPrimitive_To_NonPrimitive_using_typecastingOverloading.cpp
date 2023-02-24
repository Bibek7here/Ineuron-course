#include<iostream>
using namespace std;
class Item
{
    private:
        int item;
    public:
        void SetData(int a)
        {
            item=a;
        }
        Item()
        {

        }
        Item(int a)
        {
            item=a;
        }
        void display()
        {
            cout<<"Item is "<<item<<endl;
        }
};
class Product
{
    private:
        int product;
    public:
        void SetData(int a)
        {
            product=a;
        }
        Product()
        {

        }
        operator Item()
        {
            return product;
        }
        void display()
        {
            cout<<"Product is "<<product<<endl;
        }

};
int main()
{
    Item I1;
    Product P1;
    P1.SetData(7);
    I1=P1;
    I1.display();
    return 0;
}