//picture 12

#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=0;a<10;a++)
	{
		for(b=0;b<20;b++)
		{
			if(a%2==0)
				printf("*");
			else
			{
				if(a<4)
					printf("0");
				else
				{
					if((b<4)||(b>13))
						printf("0");
					else
						printf("*");
				}
			}
		}
		printf("\n");
	}
}
