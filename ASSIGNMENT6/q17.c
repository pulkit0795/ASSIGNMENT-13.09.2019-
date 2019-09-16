//17

#include<stdio.h>
int main()
{
	int i,j,k,a,b;
	for(i=1;i<=6;i++)
	{
		a=64+i;
		b=((7-i)*i);
		for(j=1;j<=b;j++)
		{
			for(k=1;k<=i;k++)
			{
				printf("%c",a);
			}
			a++;
		}
		printf("\n");
	}
}
