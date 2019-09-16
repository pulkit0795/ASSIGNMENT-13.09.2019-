//13

#include<stdio.h>
int main()
{
        int i,j,a;
        for(i=0;i<6;i++)
        {
                a=97;
                for(j=0;j<=i;j++)
                {
                        printf("%c",a);
                        a++;
                }
                for(j=0;j<5-i;j++)
                {
                        printf("%c",a-32);
                        a++;
                }
                printf("\n");
        }
}

