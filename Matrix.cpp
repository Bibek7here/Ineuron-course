#include<iostream>
using namespace std;
class Matrix
{
    private:
        int mat[2][2];
    public:
        void SetData(int column,int row,int value)
        {
            mat[row][column]=value;
        }
        int (*GetMatrix())[2]
        {
            return mat;
        }
};
class Calculate_Determinant:public Matrix
{
    private:
        int determinant;
    public:
        void CalculateDeterminant()
        {
            int i,j,diagonal1=1,diagonal2=1;
            int (*matrix)[2]=GetMatrix();
            for(i=0; i<2; i++)
            {
                for(j=0; j<2; j++)
                {
                    if(j==i)
                    {
                        diagonal1*=matrix[i][j];
                    }
                    else if(j==1-i)
                    {
                        diagonal2*=matrix[i][j];
                    }
                }
            }
            determinant=diagonal2-diagonal1;
        }
        int GetDeterminant()
        {
            return determinant;
        }
};
int main()
{
    Calculate_Determinant M;
    int x;
    cout<<"Enter value of the matrix:";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>x;
            M.SetData(j,i,x);
        }
    }
    M.CalculateDeterminant();
    cout<<"Determinant of given matrix is "<<M.GetDeterminant()<<endl;
    return 0;
}