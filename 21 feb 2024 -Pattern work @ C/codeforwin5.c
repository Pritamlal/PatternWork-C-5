#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number::");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2==0 && j%2==0)
			printf("0 ");
			else
			printf("1 ");
		}
		printf("\n");
	}
}
