//program to calculate simple interest using function
#include<stdio.h>
float smint(int, float, float);
int main()
{
    int p;
    float r,t;
    printf("Enter principal: ");
    scanf("%d",&p);
    printf("\nEnter rate of interest: ");
    scanf("%f",&r);
    printf("\nEnter time: ");
    scanf("%f",&t);
    printf("\nSimple interest is %.2f",smint(p,r,t));
    return 0;
}
float smint(int p, float r, float t)
{
    float simpleinterest;
    simpleinterest=(p*r*t)/100;
    return simpleinterest;
}