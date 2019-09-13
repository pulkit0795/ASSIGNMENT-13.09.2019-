//17

#include<stdio.h>
int main()
{
        int i,j,a,n,sum;
        printf("enter the value of n");
        scanf("%d",&n);
        for(j=0;j<=n-1;j++)
		scanf(";");
	for(i=0;i<=n-1;i++)
        {
                scanf("%d,",&a);
                sum=sum+a;
        }
        printf("\n\n%d",sum);
}

