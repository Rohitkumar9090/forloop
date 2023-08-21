#include<stdio.h>
int main()
{
	int i,j,k,l;
	int siz=5;
	for(k=0;k<7;k++)
		printf("*");
	printf("\n");
	for(i=1;i<7;i++)
	{
		for(j=1;j<=i;j++)                                 y
		{
			printf(" ");
		}
		for(l=siz;l>=0;l--)
		{
			printf("*");
		}
		printf("\n");
		siz--;
	}
	return 0;
}