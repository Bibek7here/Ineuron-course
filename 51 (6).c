//program to print first N even natural number in reverse order using recursion
#include<stdio.h>
void even(int);
int main()
{
    int n;
    printf("How many first odd natural number?\n");
    scanf("%d",&n);
    printf("\nFirst %d odd natural number are:\n",n);
    even(n);
    return 0;
}
void even(int n)
{
    if(n==1)
    {
        printf("%d ",2*n);    
    }
    else
    {
        printf("%d ",2*n);
        even(n-1);
    }
}