//20

#include<stdio.h>
int main()
{
	int n,m,i,j,a,sum;
	printf("enter the value of n & m");
	scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			scanf("%d,",&a);
			sum=sum+a;
		}
	}
	printf("\n\n%d",sum);
}
