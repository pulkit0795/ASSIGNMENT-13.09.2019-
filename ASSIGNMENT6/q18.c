//18

#include<stdio.h>
int main()
{
	int i,j,a;
	for(i=1;i<=5;i++)
	{
		a=65;
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
			a++;
		}
		a--;
		for(j=1;j<i;j++)
		{
			a--;
			printf("%c",a);
		}
		printf("\n");
	}
}
