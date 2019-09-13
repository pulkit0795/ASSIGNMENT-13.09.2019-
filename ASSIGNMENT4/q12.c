//12:   10-19 , 30-39 , 50-59 , 90-99

#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if(((i/10)%2)==1)
                        printf("%d,",i);
}

