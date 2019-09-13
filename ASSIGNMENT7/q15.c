//15

#include<stdio.h>
int main()
{
        int i,a,n,sum;
        printf("enter the value of n");
        scanf("%d",&n);
        printf("enter digits seperated by ,");
        for(i=0;i<=n-2;i++)
        {
                scanf("%d,",&a);
                sum=sum+a;
        }
	scanf("%d",&a);
	sum=sum+a;
        printf("\n\n%d",sum);
}

