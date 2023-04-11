#include<iostream>
#include<cmath>
using namespace std;
class Photon
{
    private:
        double wavelength;
    public:
        void Set_Wavelength(double wave)
        {
            wavelength=wave;
        }
        double Get_Wavelength()
        {
            return wavelength;
        }
};
class Calculate_photonEnergy:public Photon
{
    private:
        double photon;
    public:
        void CalculatePhoton()
        {
            photon=(6.63*pow(10,-34)*3*108)/(Get_Wavelength()*pow(10,-10));
        }
        double GetPhoton()
        {
            return photon;
        }
};
int main()
{
    Calculate_photonEnergy PE;
    double x;
    cout<<"Enter wavelength: ";
    cin>>x;
    PE.Set_Wavelength(x);
    PE.CalculatePhoton();
    cout<<"Photon Energy is "<<PE.GetPhoton()<<endl;
    return 0;
}