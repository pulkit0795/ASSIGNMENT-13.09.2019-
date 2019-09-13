//10: last digit b/w 5-8

#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if(((i%10>=5)&&(i%10<=8)))
                        printf("%d,",i);
}

