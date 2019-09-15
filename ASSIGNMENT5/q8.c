// picture 8

#include<stdio.h>
int main()
{
        int a,b;
        for(a=0;a<10;a++)
        {
                for(b=0;b<20;b++)
                {
                        if((a+b<6)||((a<8)&&(b>10)))
                                printf("0");
                        else
                        
                                printf("*");
                                
                }
                printf("\n");
        }
}

