#include<stdio.h>
main()
{
	int i=1,sum=0;
	while(i<=10)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("1부터 %d까지의 홀수의 합 : %d",i-1,sum);
}
