//program to find prime number under 100
#include<stdio.h>
int main()
{
	int i,j,count;
	printf("the prime number under 100 are: \n");
	for(i=2; i<=100; i++)
	{
		count=0;
		for(j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
				count=1;
				break;
			}
		}
		if(count==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
