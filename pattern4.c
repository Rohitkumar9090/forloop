#include<stdio.h>
int main()
{
	int row,j;
	printf("enter row");
	scanf("%d",&row);
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=row;j++)
		{
			if(j<i)
			printf(" ");
		   else
		  {
			   printf("*");
		  }
		}
		printf("\n");
	}
	return 0;
}