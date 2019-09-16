//22

#include<stdio.h>
int main()
{
        int i,j,a=1,b;
        for(i=1;i<=5;i++)
        {
                a=a+i-1;
		b=65+i-1;
                for(j=1;j<=a;j++)
                {
                        printf("%c",b);
			b++;
                }
                printf("\n");
        }
}

