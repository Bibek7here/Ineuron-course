#include<iostream>
#define PI 3.1415
using namespace std;
class Circle
{
    private:
        float radius;
        float area;
    public: 
        void SetRadius(float r)
        {
            radius=r;
        }
        int GetRadius()
        {
            return radius;
        }
        float GetArea()
        {
            return area;
        }
        void CalculateArea()
        {
            area=PI*radius*radius;
        }
};
int main()
{
    Circle result;
    float radius;
    cout<<"Enter radius of a circle: ";
    cin>>radius;
    result.SetRadius(radius);
    result.CalculateArea();
    cout<<"\nArea of "<<result.GetRadius()<<" is "<<result.GetArea();
    return 0;
}