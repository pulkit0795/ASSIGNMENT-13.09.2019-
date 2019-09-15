//4

#include<stdio.h>
int main()
{
        int n,i,sum,a,b;
        printf("give n: ");
        scanf("%d",&n);
        printf("give %d numbers: ",n);
        for(i=0;i<n;i++)
        {
                scanf("%d,",&a);
                b=a%10;
		a=a/100;
		a=(a*10)+b;
		sum=sum+a;
        }
        printf("\n\n%d",sum);
}

