//16:

#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if((((i/10)%3)!=0)&&(i%2==0))
			printf("%d,",i);
}

