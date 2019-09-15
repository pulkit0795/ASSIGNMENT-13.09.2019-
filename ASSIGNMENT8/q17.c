//17

#include<stdio.h>
int main()
{
        int n,i,sum=0,a,b,c=0;
        printf("give n: ");
        scanf("%d",&n);
        printf("give %d numbers: ",n);
        for(i=0;i<n;i++,c=b)
        {
                scanf("%d,",&a);
		b=a;
                sum=sum+(b*c);
        }
        printf("\n\n%d",sum);
}

