//21

#include<stdio.h>
int main()
{
        int n,m,i,j,a,sum=0,p=1;
        printf("enter the value of n & m");
        scanf("%d%d",&n,&m);
        for(i=0;i<=n-1;i++)
        {
                for(j=0;j<=m-1;j++)
                {
                        scanf("%d,",&a);
                        p=p*a;
                }
		sum=sum+p;
		p=1;
        }
        printf("\n\n%d",sum);
}

