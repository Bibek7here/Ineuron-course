//write a program to calculate the length of the string
#include<stdio.h>
int main()
{
    char s[10]={'b','i','b','e','k','t'};
    int i;
    for(i=0;s[i];i++);

    printf("The length of the string is %d",i);
    return 0;
}