//Write a program to print a string in reverse using a pointer
#include<stdio.h>
int main()
{
    char s[20];
    char *ptr;
    int i,j;
    printf("Enter the string: ");
    fgets(s,20,stdin);
    ptr=s;
    for(i=0; ptr[i]; i++)
    {
        if(ptr[i+1]=='\0')
        {
            for(j=i-1; j>=0; j--)
            {
                printf("%c",ptr[j]);
            }
        }
    }
    return 0;
}