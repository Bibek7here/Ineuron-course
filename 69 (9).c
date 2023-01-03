//Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int main()
{
    char str[20],*ptr;
    int i;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    ptr=str;
    for(i=0; *(ptr+i); i++);
    printf("\nlength of the string is %d",i-1); // during taking input from user using fgets it will also took enter bottom/keyword as input
    return 0;
}