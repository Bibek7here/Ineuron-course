//program to find frequency of character
#include<stdio.h>
int main()
{
    char s[10]="bibek";
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
    printf("\nGiven character has %d frequency",count);
    return 0;
}