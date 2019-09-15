//14

#include<stdio.h>
int main()
{
        int n,i,sum=0,a,b,c,d,e;
        printf("give n: ");
        scanf("%d",&n);
        printf("give %d numbers: ",n);
        for(i=0;i<n;i++)
        {
                scanf("%d,",&a);
                b=a%100;
		b=b/10;
		c=a%10;
		d=c>b?b:c;
		e=c>b?c:b;
		a=a/100;
		a=(a*10)+d;
		a=(a*10)+e;
                sum=sum+a;
        }
        printf("\n\n%d",sum);
}
