#include<stdio.h>
int main()
{
	int i,row;
	printf("enter the row");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(int j=i;j<=row;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}