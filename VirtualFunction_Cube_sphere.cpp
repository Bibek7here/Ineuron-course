#include<iostream>
using namespace std;
class Volume
{
    private:
        double s1,s2;
    public:
        void Get_Data(double s1,double s2)
        {
            this->s1=s1;
            this->s2=s2;
        }
        virtual void Display_Volume()
        {

        }

};
class Cube:public Volume
{
    private:
    public:
        void Display_Volume()
        {

        }
};
class Sphere:public Volume
{
    public:
        void Display_Volume()
        {
            
        }
};
int main()
{
    return 0;
}