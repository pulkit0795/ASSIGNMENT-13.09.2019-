//12

#include<stdio.h>
int main()
{
        int a,b;
        printf("enter the complex no.");
        scanf("%d %di",&a,&b);
        if(a==0)
        {
                if(b==0)
                        printf("0");
                else if(b==1)
                        printf("i");
                else
                        printf("%di",b);
        }
        else
        {
                if(b==0)
                        printf("%d",a);
                else if(b==1)
                        printf("%d+i",a);
                else
                        printf("%d%+di",a,b);
        }
}

