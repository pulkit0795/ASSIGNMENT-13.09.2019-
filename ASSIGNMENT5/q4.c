// picture 4

#include<stdio.h>
int main()
{
	int a,b;
	for(a=0;a<6;a++)
	{
		for(b=0;b<30;b++)
		{
			if((a%2==0))
				printf("0");
			else
			{
				if((b%3==0)||(b%5==0))
					printf("*");
				else
					printf("0");

			}
		}
		printf("\n");
	}
}

