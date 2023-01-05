//Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
};
int main()
{
    struct time start,stop,diff;
    printf("Enter start hour,min and sec: ");
    scanf("%d%d%d",&start.hour,&start.min,&start.sec);
    printf("\nEnter stop hour, min and sec: ");
    scanf("%d%d%d",&stop.hour,&stop.min,&stop.sec);
    while(stop.sec<start.sec)
    {
        --stop.min;
        stop.sec+=60;
    }
    diff.sec=stop.sec-start.sec;
    while(stop.min<start.min)
    {
        --stop.hour;
        stop.min+=60;
    }
    diff.min=stop.min-start.min;
    diff.hour=stop.hour-start.hour;
    printf("\nThe difference between the given two time is:");
    printf("\n%d:%d:%d",diff.hour,diff.min,diff.sec);
    return 0;
}