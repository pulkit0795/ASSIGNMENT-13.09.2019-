//19

#include<stdio.h>
int main()
{
	int i,a,b,n,s,p;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d,%d",&a,&b);
		p=p+(a*b);
	}
	printf("\n\n%d",p);
}
