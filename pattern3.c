#include<stdio.h>
int main()
{
	int row;
	printf("enter the row size");
	scanf("%d",&row);
	int l=row+1;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=row;j++)
		{
			if(j<=l-i)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}