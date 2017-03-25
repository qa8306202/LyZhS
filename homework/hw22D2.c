#include<stdio.h>
int main ()
{
	int i,n;
	printf("please input a number:");
	scanf("%d",&n);
	for(i=n-1;i>1;i--)
	{
	if (n % i == 0)
	{
		break;
		printf("%d is a prime number\n",n);
	}
	else
	continue;
		}
	if (i=1)
	printf("%d is not a prime number\n",n);
return 0;
}
