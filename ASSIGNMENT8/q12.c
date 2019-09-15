//12

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
                if(a>=30&&a<=90)
                {
                        b=a;
                }
                else
                {
                        continue;
                }
                sum=sum+(b);
        }
        printf("\n\n%d",sum);
}

