#include<stdio.h>
main()
{
	int i,dan;
	printf("���? : ");
	scanf("%d",&dan);
	for(i=1;i<=9;i++)
	{
		printf("%d * %d = %d\n",dan,i,dan*i);
	}
}
