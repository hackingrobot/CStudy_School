#include<stdio.h>
main()
{
	int i=1,num;
	printf("����� ���� �� �Է� : ");
	scanf("%d",&num);
	while(i<=num){
		if(num % i == 0)
			printf("%d ",i);
		i++;
	}
}
