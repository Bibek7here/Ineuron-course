#include<iostream>
#include<iomanip>
using namespace std;
class Matrix
{
    private:
        int a[3][3];
    public:
        void SetData(int (*)[3]);
        void DisplayData();
        Matrix operator+(Matrix m)
        {
            Matrix m1;
            int i,j;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    m1.a[i][j]=a[i][j]+m.a[i][j];
                }
            }
            return m1;
        }
};
void Matrix::DisplayData()
{
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<setw(5)<<a[i][j];
        }
        cout<<endl;
    }
}
void Matrix::SetData(int b[3][3])
{
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            a[i][j]=b[i][j];
        }
    }
}
int main()
{
    Matrix M1,M2,M3;
    int mat[3][3];
    int i,j;
    cout<<"Enter Matrix Element(3*3): ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>mat[i][j];
        }
    }
    M1.SetData(mat);
    cout<<"Enter Matrix Element(3*3): ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>mat[i][j];
        }
    }
    M2.SetData(mat);
    cout<<"\nFirst Matrix: "<<endl;
    M1.DisplayData();
    cout<<"\nSecond Matrix: "<<endl;
    M2.DisplayData();
    M3=M1+M2;
    cout<<"\nAddition of Matrix : "<<endl;
    M3.DisplayData();
    return 0;
}