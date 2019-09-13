//4

#include<stdio.h>
int main()
{
	int a,b,c,d;
	float m1,m2;
	printf("enter the values");
	scanf("(%d,%d)(%d,%d)",&a,&b,&c,&d);
	m1=((a+c)/2);
	m2=((b+d)/2);
	printf("mid point is (%f,%f)",m1,m2);
}
