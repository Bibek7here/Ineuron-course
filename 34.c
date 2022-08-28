//program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition using switcch statement
#include<stdio.h>
int main()
{
    int n;
    float total;
    printf("Enter electricity consumed: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1 ... 50:
            total=(n*0.50);
            total=(120*total)/100;
            break;
        case 51 ... 150:
            n=n-50;
            total=(50*0.50)+(n*0.75);
            total=(120*total)/100;
            break;
        case 151 ... 250:
            n=n-150;
            total=(50*0.50)+(100*0.75)+(n*1.20);
            total=(120*total)/100;
            break;
        default:
            n=n-250;
            total=(50*0.50)+(100*0.75)+(100*1.20)+(n*1.50);
            total=(120*total)/100;
            break;
    }
    printf("\nTotal electricity bill after deducting 20%% surcharge is %.2f",total);
    return 0;
}