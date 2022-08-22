//program to print sum of cube of first N natural number
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("how many first natural number:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum+=i*i*i;
		
	}
	printf("the sum of cube of first %d natural number is %d",n,sum);
	return 0;
}
