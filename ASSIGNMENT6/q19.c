//19

#include<stdio.h>
int main()
{
	int i,j,a;
	for(i=1;i<=6;i++)
	{
		a=65+6-i;
		for(j=1;j<=6-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
			a++;
		}
		printf("\n");
	}
}
