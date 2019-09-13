//18

#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,n,m2;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d,",&a);
		m2=m2+pow(a,2);
	}
	printf("magnitude is %f",sqrt(m2));
}
