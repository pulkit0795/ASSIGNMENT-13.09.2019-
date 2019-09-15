//13-avg of odd no.

#include<stdio.h>
int main()
{
        int n,i,sum=0,a,b,count=0;
	float avg;
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
                        b=a;
			count++;
                }
                sum=sum+(b);
        }
	printf("\nsum=%d,\ncount=%d",sum,count);
	avg=sum/count;
        printf("\n\n%f",avg);
}
