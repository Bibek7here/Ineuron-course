//Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
    int a,*a1;
    float b,*b1;
    char c,*c1;
    printf("Enter a integer number for a: ");
    scanf("%d",&a);
    printf("Enter a decimal number for b: ");
    scanf("%f",&b);
    fflush(stdin);
    printf("Enter a character for c: ");
    scanf("%c",&c);
    a1=&a;
    b1=&b;
    c1=&c;
    printf("\nvalue of a, b and c : %d %f %c",*a1,*b1,*c1);
    return 0;
}