//daffodial number
#include<stdio.h>
//#include<math.h>
int main()
{
	int a,b,i,m;
// within 1000
	for(i=100;i<1000;i++)
	{
		m=0;
		a=i;
		while(a!=0)
		{
		b=a%10;
		a=a/10;
		m=m+b*b*b;
		}
		if (i==m)
			printf("%d,",i);
	}

	for(i=1000;i<10000;i++)
	{
		m=0;
		a=i;
		while(a!=0)
		{
		b=a%10;
		a=a/10;
		m=m+b*b*b*b;
		}
		if (i==m)
			printf("%d,",i);
	}
	
	for(i=10000;i<100000;i++)
	{
		m=0;
		a=i;
		while(a!=0)
		{
		b=a%10;
		a=a/10;
		m=m+b*b*b*b*b;
		}
		if (i==m)
			printf("%d,",i);
	}
printf("\n");
			
	return 0;
}

