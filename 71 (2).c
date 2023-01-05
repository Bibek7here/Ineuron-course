//Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,*ptr;
    printf("\nEnter the size of the memory to be allocated: ");
    scanf("%d",&size);
    ptr=(int *)malloc(size);
    if(ptr==NULL)
    {
        printf("\nMemory allocation failed!");
        return 0;
    }
    return 0;
}