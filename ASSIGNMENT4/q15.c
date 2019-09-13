// 15:

#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if(((i/10)%2)!=(i%2))
                        printf("%d,",i);
}

