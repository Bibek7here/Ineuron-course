//program to print first Nth term of fibonnaci series
#include<stdio.h>
int main()
{
	int n,first=0,second=1,third=0,i=3;
	printf("How many term?\n");
	scanf("%d",&n);
	printf("First %d fibonnaci series are:\n%d %d",n,first,second);
	while(i<=n)
	{
		third=first+second;
		first=second;
		second=third;
		printf(" %d",third);
		i++;
	}
	return 0;
}
