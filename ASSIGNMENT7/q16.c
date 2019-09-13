//16

#include<stdio.h>
int main()
{
        int i,a,n,sum;
        printf("enter the value of n");
	scanf("%d;",&n);
	for(i=0;i<=n-1;i++)
        {
                scanf("%d,",&a);
                sum=sum+a;
        }
        printf("\n\n%d",sum);
}
