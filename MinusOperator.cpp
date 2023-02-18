#include<iostream>
#include<iomanip>
using namespace std;
class Matrix
{
    private:
        int a[3][3];
    public:
        void SetData( int [3][3]);
        void operator-()
        {
            int i,j;
            for(i=0; i<3; i++)
            {
                for(j=0 ;j<3; j++)
                {
                    a[i][j]=-a[i][j];
                }
            }
        }
        void DisplayData();
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
    Matrix M1;
    int mat[3][3],i,j;
    cout<<"Enter Matrix Elements (3x3): ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>mat[i][j];
        }
    }
    M1.SetData(mat);
    cout<<"\nMatrix is: "<<endl;
    M1.DisplayData();
    -M1;
    cout<<"\nMatrix is: "<<endl;
    M1.DisplayData();
    return 0;
}