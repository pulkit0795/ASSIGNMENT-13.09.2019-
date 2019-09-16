//28

#include<stdio.h>
int main()
{
	int i,j,a=1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a=a+j+1;
		}
		a=1;
		printf("\n");
	}
}
