#include<stdio.h>
main()
{
	int i=1,sum=0;
	while(i<=10)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("1���� %d������ Ȧ���� �� : %d",i-1,sum);
}
