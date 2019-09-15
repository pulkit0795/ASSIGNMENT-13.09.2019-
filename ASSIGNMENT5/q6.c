// picture 6

#include<stdio.h>
int main()
{
        int a,b;
        for(a=0;a<4;a++)
        {
                for(b=0;b<20;b++)
                {
                        if(a%2==0)
			{
				if(b%5==0)
					printf("0");
				else
					printf("*");
			}

                        else
                        {
                                if(b%5==0)
                                        printf("*");
                                else
                                        printf("0");
                        }
                }
                printf("\n");
        }
}

