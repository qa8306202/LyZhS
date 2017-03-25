//This programming want to show a 2D-array.
#include<stdio.h>
# define NUM 11
int main()
{
	int arr[NUM][NUM]={0};
	int i=0,j=0,k;
	int N=NUM;
	int count =1;
for (k=0;k<=N;k++) //K's ceiling does not matter
{
	for (;j<N-1-k;j++)
		arr[i][j]=count++;//first arr=count then count++
	for(;i<N-1-k;i++)
		arr[i][j]=count++;
	for(;j>k+0;j--)
		arr[i][j]=count++;
	for(;i>k+1;i--)

		arr[i][j]=count++;
}
	arr[i][j]=N*N;//this time( i,j) in the black place
	//print
	for(i=0;i<N;i++)
		{
		for(j=0;j<N;j++)
		{
			if(arr[i][j]!=0)
				printf("%4d",arr[i][j]);
			else
				printf("    ");
		}
	printf("\n");
		}
return 0;
}
