#define pi 3.1415926
#include<stdio.h>
int main()
{
	float r,s,l;
	printf("please input R=");
	scanf("%f",&r);
	l = pi*r;
	s = r*r*pi;
	printf("S = %f and L = %f\n",s,l);

	return 0;
}
