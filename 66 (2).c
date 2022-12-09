#include<stdio.h>
int main()
{
    char s[20]="bibek tamang";
    char c;
    int i,count=0;
    printf("Enter a character: ");
    scanf("%c",&c);
    for(i=0; s[i]; i++)
    {
        if(s[i]==c)
        {
            count++;
        }
    }
    printf("\nEntered character is occured %d times",count);
    return 0;
}