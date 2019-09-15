//2

#include<stdio.h>
int main()
{
        int n,i,sum,a;
        printf("give n: ");
        scanf("%d",&n);
        printf("give %d numbers: ",n);
        for(i=0;i<n;i++)
        {
                scanf("%d,",&a);
		a=a%100;
		a=a/10;
                sum=sum+a;
        }
        printf("\n\n%d",sum);
}
