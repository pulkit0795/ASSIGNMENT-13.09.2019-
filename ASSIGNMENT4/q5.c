//multiple of 3 or 7

#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if((i%3==0)||(i%7==0))
                        printf("%d,",i);
}

