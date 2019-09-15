//16

#include<stdio.h>
int main()
{
        int n,i,sum=0,a,b,count=1;
        printf("give n: ");
        scanf("%d",&n);
        printf("give %d numbers: ",n);
        for(i=0;i<n;i++)
        {
                scanf("%d,",&a);
                if(a%2==0)
                {
                        b=a;
                }
                else
                {
                        continue;
                }
                sum=sum+(b*count);
		count++;
        }
        printf("\n\n%d",sum);
}
