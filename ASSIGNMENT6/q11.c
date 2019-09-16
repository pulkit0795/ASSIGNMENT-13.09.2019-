//11

#include<stdio.h>
int main()
{
	int i,j,a,b=65;
	for(i=0;i<6;i++)
	{
		a=b;
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=0;j<6-i;j++)
		{
			printf("%c",a);
			a++;
		}
		printf("\n");
		b++;
	}
}
