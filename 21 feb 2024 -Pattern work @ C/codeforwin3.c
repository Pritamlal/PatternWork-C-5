#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number::");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j%2==1)
			printf("0 ");
			else
			printf("1 ");
		}
		printf("\n");
	}
}
