#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2==0)
			printf("1 ");
			else
			printf("0 ");
			
		}
		printf("\n");
	}
}
