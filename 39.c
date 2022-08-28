//programt to find roots
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d=0,flag;
    float d1,d2;
    printf("Enter value of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c; 
    if(d>0)
    {
        flag=1;
    }
      if(d<0)
    {
        flag=2;
    }
    if(d==0)
    {
        flag=3;
    }
    switch(flag)
    {
        case 1:
            d1=(-b+sqrt(d)/(2*a));
            d2=(-b-sqrt(d)/(2*a));
            printf("\nThe roots of given quadratic equation is %.2f or %.2f",d1,d2);
            break;
        case 2:
            d1=(-b/2*a)+(sqrt(-d)/(2*a));
            d2=(-b/2*a)-sqrt(-d)/(2*a);
            printf("\nThe roots of given quadratic equation is %.2f or %.2f",d1,d2);
            break;
        case 3:
            d1=-b/(2.0*a);
            printf("\nThe roots of given quadratic equation is %.2f",d1);
            break;
    }
    return 0;
}