//13

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the vector");
	scanf("%di%+dj%+dk",&a,&b,&c);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
				printf("0");
			else if(c=1)
