#include<stdio.h>
int main()
{	int n;//draw n line
	printf("HOW MANY LINE DO U WANT TO DRAW?\n");
		scanf("%d",&n);
	if (n>22)
	printf("THE LINE IS DEFAUTL\n");
	else
	{
		int j,i,k;
		for (i=0;i<=n;i++)
		{	
			for(k=n-1;k>=i;k--)
			{
				printf(" ");
			}
			for (j=1;j<=(2*i+1);j++)
			{	
				printf("*");
			}
		printf("\n");//not put \n after "*",
		}		
	}
	return 0;
}





















