//3:

#include<stdio.h>
int main()
{
	int a,b;
	for(a=0;a<4;a++)
	{
		for(b=0;b<10;b++)
		{
			if(a%2==0)
			{
				if(b%2==0)
					printf("0");
				else
					printf("*");
			}
			else
			{
				if(b%2==0)
					printf("*");
				else
					printf("0");
			}
		}
		printf("\n");
	}
}
