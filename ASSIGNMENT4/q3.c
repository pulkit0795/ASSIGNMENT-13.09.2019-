//even no less than 50 & odd no. more than 50

#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if(((i<50)&&(i%2==0))||((i>50)&&!(i%2==0)))
                        printf("%d,",i);
}

