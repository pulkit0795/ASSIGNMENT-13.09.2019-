//6.unit vector

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	printf("enter the vector");
	scanf("%fi%fj%fk",&a,&b,&c);
	d=sqrt(pow(a,2)+pow(b,2)+pow(c,2));
	printf("%+fi%+fj%+fk",a/d,b/d,c/d);
}
