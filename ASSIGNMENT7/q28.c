//28

#include<stdio.h>
int main()
{
	int n,a,b,i,sum_r=0,sum_i=0;
	//sum_r is sum of real parts
	//sum_i is sum of imaginary parts
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d %di",&a,&b);
		sum_r=sum_r+a;
		sum_i=sum_i+b;
	}
	printf("\n\n%d%+di",sum_r,sum_i);
}
