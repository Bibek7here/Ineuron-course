//program to chech whether the given number is there in the fibonnaci series or not
#include<stdio.h>
int main()
{
	int n,first=0,second=1,third=0,i;
	printf("Enter number to check: ");
	scanf("%d",&n);
	if(n==0)
	{
		printf("%d is in the fibonnaci series",n);
	}
	for(i=1; i<=n*2; i++)
	{
		third=first+second;
		first=second;
		second=third;
		if(third==n)
		{
			printf("%d is in the fibonnaci series",n);
			break;
		}
	}
	if(third!=n)
	{
		printf("%d is not in the fibonnaci series",n);
	}
	return 0;
}
