//resolute prime factor
#include<stdio.h>
int main()
{
	int n,i,m;
	printf("input a number:");
	scanf("%d",&n);

	i=n-1;
		printf("%d=",n);
	for (;i>=1;i--)
	{
		if (n%i== 0)
		{	
			m=n/i;
			n=i;
			printf("%d*",m);
		}
	}
printf("\b \b\n");  //\b \b is backspace

return 0;
}
