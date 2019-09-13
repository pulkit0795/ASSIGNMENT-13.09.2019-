//9

#include<stdio.h>
int main()
{
	float a,b,c,d,m1,m2;
	int m;
	printf("to multiply press 1 & to divide press 2");
	scanf("%d",&m);
	if(m==1)
	{
		scanf("(%f %fi)*(%f %fi)",&a,&b,&c,&d);
		printf("answer is %+f%+fi",(a*c)-(b*d),(a*d)+(b*c));
	}
	else if(m==2)
	{
		scanf("(%f %fi)/(%f %fi)",&a,&b,&c,&d);
		m1=((a*c)+(b*d))/((c*c)+(d*d));
		m2=((b*c)-(a*d))/((c*c)+(d*d));
		printf("answer is %+f%+fi",m1,m2);
	}
}

