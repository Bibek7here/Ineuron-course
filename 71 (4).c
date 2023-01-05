//Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c,*ptr;
    int i=0,j=1;
    printf("Enter the string: ");
    ptr=(char *)malloc(sizeof(char));
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        ptr=(char *)realloc(ptr,j*sizeof(char));
        ptr[i]=c;
        i++;
    }
    ptr[i]='\0';
    printf("\nThe string is %s",ptr);
    free(ptr);
    return 0;
}