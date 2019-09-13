//even no b/w 20-40 & odd no. b/w 50-80

#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if((((i>20)&&(i<40))&&(i%2==0))||(((i>50)&&(i<80))&&!(i%2==0)))
                        printf("%d,",i);
}

