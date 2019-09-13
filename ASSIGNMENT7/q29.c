//29

#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a,b,power,sum;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d,%d,",&a,&b);
		power=pow(a,b);
		sum=sum+power;
	}
	printf("\n\n%d",sum);
}
