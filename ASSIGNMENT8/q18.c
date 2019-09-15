//18

#include<stdio.h>
int main()
{
        int n,i,j,sum=0,a,b;
        printf("give n: ");
        scanf("%d",&n);
        printf("give %d numbers: ",n);
        for(i=0;i<n;i++)
        {
                scanf("%d,",&a);
                if(a%2==0)
                {
                       for(j=i;j<n;j++)
		       {
			       scanf("%d,",&a);
			       sum=sum+a;
		       }
		       break;
                }
                else
                {
			continue;
                }
                
        }
        printf("\n\n%d",sum);
        
}
