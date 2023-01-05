//Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    char *ptr,i=0,j=1;
    printf("Enter text: ");
    ptr=(char *)malloc(sizeof(char));
    if(ptr==NULL)
    {
        printf("\nMemory allocation failed!");
        return 0;
    }
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        ptr=(char *)realloc(ptr,j*sizeof(char));
        ptr[i]=c;
        i++;
    }
    ptr[i]='\0';
    printf("\nEnter text: %s",ptr);
    free(ptr);
    return 0;
}