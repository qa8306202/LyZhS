#include<stdio.h>
int main()
{
#if 0
	short a;
	a = 40000;
	printf("a's value is %d\n",a);
	printf("a'addr is %x\n",&a);

#endif
short x = 4000;
printf("x value is %d and x addr is %p\n",x,&x);


return 0;	
}
