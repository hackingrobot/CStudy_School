#include<stdio.h>
main()
{
	int dan,i=1;
	printf("�� �� ? ");
	scanf("%d",&dan);
	
	while(i<=9)
	{
		printf("%d * %d = %d \n",dan,i,dan*i);
		i++;
	}
}
