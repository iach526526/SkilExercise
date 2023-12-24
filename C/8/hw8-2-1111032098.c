#include <stdio.h>
#define PSTATE printf("a:%d b:%d \nptr1:%p *ptr1:%d\nptr2:%p *ptr2:%d\n\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
int main()
{
	int a=5,b=10;
	printf("a:%d b:%d",a,b);
	int *ptr1,*ptr2;
	printf("a:%d b:%d \nptr1:%p *ptr1:None\nptr2:%p *ptr2:None\n\n",a,b,ptr1,ptr2);
	ptr1=&a;
	ptr2=&b;
	
	*ptr1=7;
	PSTATE
	*ptr2=32;
	PSTATE
	a=17;
	PSTATE
	ptr1=ptr2;
	PSTATE
	*ptr1=9;
	PSTATE
	ptr1=&a;
	PSTATE
	a=64;
	PSTATE
	*ptr2=*ptr1+5;
	PSTATE
	ptr2=&a;
	PSTATE
	return 0;
	
 } 
