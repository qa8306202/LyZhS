//print:1!+2!+3!...+n!=?
#include<stdio.h>
int main()
{
	int j,i,n,g=0,m;
	printf("input n:");
	scanf("%d",&n);
for (j=1;j<=n;j++)
{
	m=1;
	printf("%d!+",j);
	//caculate n!
	for (i=1;i<=j;i++)
		m=i*m;
	g=m+g;
}
printf("\b \b=%d\n",g);



	return 0;
}

