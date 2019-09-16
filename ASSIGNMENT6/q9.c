//9

#include<stdio.h>
int main()
{
	int i,j,a;
	for(i=0;i<6;i++)
	{
		a=65;
		for(j=0;j<6-i;j++)
		{
			printf("%c",a);
			a++;
		}
	printf("\n");
	}
}
