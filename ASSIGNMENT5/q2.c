// 2

#include<stdio.h>
int main()
{
	int a,b;
	for(a=0;a<10;a++)
	{
		for(b=0;b<20;b++)
		{
			if((a<3))
			{
				if(b<8)
					printf("0");
				else
					printf("*");
			}
			else if((a>2)&&(a<7))
				printf("*");
			else
			{
				if(b>14)
					printf("0");
				else
					printf("*");
			}
		}
		printf("\n");
	}
}
