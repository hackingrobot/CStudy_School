#include<stdio.h>
main()
{
	int sum=0,n;
	printf("���� �Է�(0�̸� ����) : ");
	do
	{
		scanf("%d",&n);
		sum+=n;
	}while(n!=0);
	printf("�� : %d",sum);
}
