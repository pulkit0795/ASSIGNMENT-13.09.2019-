// picture 9

#include<stdio.h>
int main()
        {
                int a,b,c=6;
                for(a=1;a<=9;a++)
                {
                        if(a<=3)
                        {
                                for(b=1;b<=20;b++)
					printf("*");
			}
			else
			{
				for(b=1;b<=20;b++)
				{
					if((a+b<10)||((a+b)>=c))
					{
						printf("*");
					}
					else
						printf("0");
				}
			}
			c+=2;
			printf("\n");
		}
	}

