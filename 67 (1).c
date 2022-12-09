//function to compare strings   
#include<stdio.h>
int check(char *, char *);
int main()
{
    char a[20],b[20];
    printf("Enter first string: ");
    fgets(a,20,stdin);
    printf("\nEnter second string: ");
    fgets(b,20,stdin);
    if(check(a,b)==1)
    {
        printf("\nThe string is in opposite form of dictonary");
    }
    else if(check(a,b)==-1)
    {
        printf("\nThe string is in dictoanry form");
    }
    else
    {
        printf("\nThe string is equal");
    }
    return 0;
}
int check(char a[], char b[])
{   
    int i,count=1;
    for(i=0; a[i]; i++)
    {
        if(a[i]<b[i])
        {
            return -1;
        }
        else if(a[i]>b[i])
        {
            return 1;
        }
        else
        {
            count=0;
        }
    }
    return count;
}