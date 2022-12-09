//function to calculate the length of the string
#include<stdio.h>
int lengh(char *);
int main()
{
    char s[20];
    printf("Enter the string: ");
    fgets(s,20,stdin);
    printf("\nLength of the string is %d",lengh(s));
    return 0;
}
int lengh(char s[])
{
    int i,count=0;
    for(i=0; s[i]; i++)
    {
        count=count+1;
    }
    return count-1; // as fgets end whenever n-1 element encounter
}