//6

#include<stdio.h>
int main()
{
        int n,i,sum=0,a,b,c,d;
        printf("give n: ");
        scanf("%d",&n);
        printf("give %d numbers: ",n);
        for(i=0;i<n;i++)
        {
                scanf("%d,",&a);
                b=a%100;
                b=b/10;
                c=a%10;
		a=a/100;
		a=(a*10)+c;
		a=(a*10)+b;
                sum=sum+a;
        }
        printf("\n\n%d",sum);
}
