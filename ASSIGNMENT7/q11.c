//11


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
        float a,b,c,d,r1,r2,i1,i2;
        printf("enter the quadratic equation");
        scanf("%fx2 %fx %f=0",&a,&b,&c);
        d=sqrt(pow(b,2)-(4*a*c));
        if(d>0)
        {
                r1=(-b+d)/(2*a);
                r2=(-b-d)/(2*a);
                printf("roots are real & distinct:\n%f\n%f",r1,r2);
        }
        else if(d==0)
        {
                r1=(-b/(2*a));
                printf("roots are real & equal:\n%f",r1);
        }
        else
        {
                r1=(-b/(2*a));
                i1=sqrt(abs((b*b)-(4*a*c)))/(2*a);
                i2=(-i1);
                printf("roots are imaginary:\n %+f%+fi \t & \t %+f%+fi",r1,i1,r1,i2);
        }
}

