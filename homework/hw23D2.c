//how to get the max devidor of two numbers?
//zhan zhuan xiang chu fa
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("input two numbers:");
	scanf("%d%d",&a,&b);
	if (a<b)
	{
		c=b;
		b=a;
		a=c;
	}
while (b!=0)
	{

	a=a%b;// this place .We can't input b=a%b,otherwise ,"a" will not change
//	printf("%d\n",b);
//	return 0;
	if (a<b)
	{
		c=b;
		b=a;
		a=c;
	}
	}
	printf("the max devidor is %d\n",a);


	return 0;

}

