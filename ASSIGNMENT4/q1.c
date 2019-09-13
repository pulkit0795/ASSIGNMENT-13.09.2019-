//even no b/w 20 & 70

#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<100;i++)
		if(((i>20)&&(i<70))&&(i%2==0))
			printf("%d,",i);
}
