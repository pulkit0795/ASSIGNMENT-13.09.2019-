//11


#include<stdio.h>
int main()
{
        int n,i,sum=0,a,b,c;
        printf("give n: ");
        scanf("%d",&n);
        printf("give %d numbers: ",n);
        for(i=0;i<n;i++)
        {
                scanf("%d,",&a);
                b=a%10;
		if(b%3==0)
                {
                        c=a;
                }
                else
                {
                        continue;
                }
                sum=sum+a;
        }
        printf("\n\n%d",sum);
}

