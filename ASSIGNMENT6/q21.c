//21

#include<stdio.h>
int main()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{
		a=a+i-1;
		for(j=1;j<=a;j++)
		{
			printf("%c",65);
		}
		printf("\n");
	}
}
