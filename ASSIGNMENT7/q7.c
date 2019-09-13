//7 cross product

#include<stdio.h>
int main()
{
	float a1,a2,a3,b1,b2,b3,c1,c2,c3;
	scanf("%fi%fj%fk%fi%fj%fk",&a1,&a2,&a3,&b1,&b2,&b3);
	c1=(a2*b3)-(b2*a3);
	c2=(-1)*((a1*b3)-(b1*a3));
	c3=(a1*b2)-(b1*a2);
	printf("cross product is %+fi%+fj%+fk",c1,c2,c3);
}

