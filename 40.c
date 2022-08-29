//program to calculate the area of a circle
#include<stdio.h>
float areaof(int);
int main()
{
    int r;
    printf("Emter radius of a circle: ");
    scanf("%d",&r);
    printf("\nArea of circle having %d radius is %.2f",r,areaof(r));
    return 0;
}
float areaof(int a)
{
    float area;
    area=3.14*a*a;
    return area;   
}