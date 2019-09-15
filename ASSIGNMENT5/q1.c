//1
#include<stdio.h>
int main()
{
	int a,b;
	for(a=0;a<5;a++)
	{
		for(b=0;b<20;b++)
		{
			if((a%2==0))
			{
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
