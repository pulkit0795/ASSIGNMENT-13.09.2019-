//7 even no but not multiple of 3 or 5

#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if((i%2==0)&&!((i%3==0)||(i%5==0)))
                        printf("%d,",i);
}

