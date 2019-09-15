//picture 10

#include<stdio.h>
int main()
{
	int a,b,c=6;
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=20;b++)
		{
			if(a<=2)
				printf("*");
			else
			{
				if((a+b<=9)||((a+b)>=c))
				{	
					printf("*");
				}
				else
				{
					printf("0");
				}
			}
		}
		c+=3;
		printf("\n");
	}
}
