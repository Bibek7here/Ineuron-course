#include<stdio.h>
int pascal(int);
int main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
  //  printf("\nEnter number taken at a time: ");
  //  scanf("%d",&r);
    pascal(n);
    return 0;
}
int fact(int n)
{
    int i,temp=1;
    for(i=1; i<=n; i++)
    {
        temp=temp*i;
    }
    return temp;
}
int com(int n, int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
int pascal(int n)
{
    int i,j;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d ",com(i,j));
        }
        printf("\n");
    }
}