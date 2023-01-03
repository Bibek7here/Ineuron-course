//Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int length(char *);
int main()
{
    int n1,n2,*ptr1,*ptr2;
    int i;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);
    ptr1=&n1;
    ptr2=&n2;
    for(i=*ptr1+1; i<*ptr2; i++)
    {
        printf("%d",i);
    }
    return 0;
}