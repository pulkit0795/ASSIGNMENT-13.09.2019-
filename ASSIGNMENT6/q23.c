//23

#include<stdio.h>
int main()
{
	int i,j=1,a=87;
	for(i=1;i<=6;i++)
	{
		a=a-i-1;
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
			a++;
		}
		printf("\n");
	}
}
