//8

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
                sum=sum+(a*(i+1));
        }
        printf("\n\n%d",sum);
}
