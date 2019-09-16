//12

#include<stdio.h>
int main()
{
	int i,j,a,b;
	for(i=0;i<6;i++)
	{
		a=65;
		b=97;
		for(j=0;j<=i;j++)
		{
			printf("%c",a);
			a++;
		}
		for(j=0;j<5-i;j++)
		{
			printf("%c",b);
			b++;
		}
		printf("\n");
	}
}
