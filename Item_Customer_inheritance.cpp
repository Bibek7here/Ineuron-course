#include<iostream>
using namespace std;
class Item
{
    private:
        int item_no;
        char name[50];
        float price;
    public:
        void SetItemNumber(int n)
        {
            item_no=n;
        }
        void SetItemName(char* Nam)
        {
            int i;
            for(i=0; Nam[i]; i++)
            {
                name[i]=Nam[i];
            }
            name[i]='\0';
        }
        void SetPrice(float p)
        {
            price=p;
        }
        int GetItemNumber()
        {
            return item_no;
        }
        char* GetItemName()
        {
            return name;
        }
        float GetPrice()
        {
            return price;
        }
};
class Discounted_Item: public Item
{
    private:
        int Discount;
        float discounted_price;
    public:
        void SetDiscountPercent(int Discount)
        {
            this->Discount=Discount;
        }
        void CalculateDiscountedPrice()
        {
            discounted_price=Discount*GetPrice()/100;
        }
        float GetDiscountedPrice()
        {
            return discounted_price;
        }
        int GetDiscountPercent()
        {
            return Discount;
        }
        void DisplayDetails()
        {
            cout<<"Item name : "<<GetItemName()<<endl;
            cout<<"Item No.  : "<<GetItemNumber()<<endl;
            cout<<"Item Price: "<<GetPrice()<<endl;
            cout<<"Discount Percent : "<<Discount<<endl;
            cout<<"Discounted price : "<<discounted_price<<endl;
            cout<<"................................."<<endl;
        }
};
int main()
{
    int i=0,n;
    cout<<"How  many items you want to enter: "<<endl;
    cin>>n;
    Discounted_Item It[n];
    int ItemNumber,Discount;
    float price,TotalPrice=0,DiscountedPrice=0;
    char Name[50];
    do
    {
        cout<<"Enter Item Name: ";
        cin>>Name;
        cout<<"Enter Item No.: ";
        cin>>ItemNumber;
        cout<<"Enter Item Price: ";
        cin>>price;
        cout<<"Enter Discount Percent: ";
        cin>>Discount;
        It[i].SetItemName(Name);
        It[i].SetItemNumber(ItemNumber);
        It[i].SetPrice(price);
        It[i].SetDiscountPercent(Discount);
        It[i].CalculateDiscountedPrice();
        cout<<"......................"<<endl;
        i++;
    } while (i!=n);
    for(i=0; i<n; i++)
    {
        It[i].DisplayDetails();
        TotalPrice+=It[i].GetPrice();
        DiscountedPrice+=It[i].GetDiscountedPrice();
    }
    cout<<"Total Price : "<<TotalPrice<<endl;
    cout<<"Total Discount: "<<DiscountedPrice;
    return 0;
}