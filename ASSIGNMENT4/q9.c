// 9: last digit multiple of three

#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if(((i%10==0)||(i%10==3)||(i%10==6)||(i%10==9)))
                        printf("%d,",i);
}

