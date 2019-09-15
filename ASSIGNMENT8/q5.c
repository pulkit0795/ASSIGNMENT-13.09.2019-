//5

#include<stdio.h>
int main()
{
        int n,i,sum=0,a,b;
        printf("give n: ");
        scanf("%d",&n);
        printf("give %d numbers: ",n);
        for(i=0;i<n;i++)
        {
                scanf("%d,",&a);
                b=a%100;
		b=b/10;
		a=a%10;
		sum=sum+(a*b);
        }
        printf("\n\n%d",sum);
}

