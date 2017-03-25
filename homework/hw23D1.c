//input a graph
//like: *
//     * *
//    * * *
#include<stdio.h>
int main()
{
	int k,i,j,n;
printf("how many line do you want to draw star:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
		for (k=n-i+1;k>=0;--k)
			{
				printf(" ");
			}	
	for (j=1;j<=i;j++)
	{
		printf("* ");
	}

	printf("\n");
}

return 0;
}
