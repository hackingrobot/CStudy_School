#include<stdio.h>
main()
{
	int num;
	
	do
	{
		scanf("%d",&num);
		if(num>0){
			if(num%2 != 0)
				printf("Ȧ��\n");
			else
				printf("¦��\n");
		}
	}while(num>=0);
}
