//11: sum of both digits is multiple of 7


#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if(((i%10)+(i/10))%7==0)
                        printf("%d,",i);
}

