// 50-70 or <20 or >90

#include<stdio.h>
int main()
{
        int i;
        for(i=0;i<100;i++)
                if(((i>50)&&(i<70))||(i<20)||(i>90))
                        printf("%d,",i);
}

