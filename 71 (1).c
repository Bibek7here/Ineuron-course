//Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(sizeof(int));
    *ptr=7;
    printf("\nValue before: %d",*ptr);
    free(ptr);
    printf("\nValue after: %d",*ptr);
    return 0;
}