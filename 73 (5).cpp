//Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;
int add(char,char);
int main()
{
    int n1,result;
    float n2;
    printf("Enter two number: ");
    scanf("%d%f",&n1,&n2);
    result=add(n1,n2);
    printf("\nSum is %d",result);
    return 0;
}
int add(char a, char b)
{
    return a+b;
}