//Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
int swap(char *,char *);
int main()
{
    char str1[20],str2[20];
    printf("\nEnter the value of first string: ");
    fgets(str1,20,stdin);
    printf("\nEnter the value of second string: ");
    fgets(str2,20,stdin);
    swap(str1,str2);
    printf("\nvalue of first string after swapped is %s",str1);
    printf("\nvalue of second string after swapped is %s",str2);
    return 0;
}
int swap(char *p, char *q)
{
    char temp;
    int i;
    for(i=0; p[i] || q[i]; i++)
    {
        temp=p[i];
        p[i]=q[i];
        q[i]=temp;
    }
    return 0;
}