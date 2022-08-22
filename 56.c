//program to print sum of first N odd natural number
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("how many first odd natural number: ");
	scanf("%d",&n);
	for(i=1; i<=n*2; i++)
	{
		if(i%2)
		{
			sum+=i;
		}
	}
	printf("the sum of first %d odd natural number is %d",n,sum);
	return 0;
}
