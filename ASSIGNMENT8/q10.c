//10

#include<stdio.h>
int main()
{
        int n,i,count=0,a,b;
        printf("give n: ");
        scanf("%d",&n);
        printf("give %d numbers: ",n);
        for(i=0;i<n;i++)
        {
                scanf("%d,",&a);
                if(a%2==0)
                {
                        continue;
                }
                else
                {
                        count++;
                }
        }
        printf("\n\n%d",count);
}

