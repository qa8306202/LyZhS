//This is choose sort.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	//initial and get random number.
	srand(time(0));
	int arr[10];
	int i,j,max,index;
	for (i=0;i<=9;i++)
		arr[i]=random()%10000;
	//choose sort
	for (j=0;j<=9;j++)
	{
	max =arr[j];
	for (i=j;i<=9;i++)
	{
		if (max<arr[i])	
		{max = arr[i];
			index=i;
		}	//GET THE MAX printf("max=%d",max);
	}
	arr[index]=arr[j];
	arr[j]=max; 	//exchange them ,this segment is out of 
					//the internal circle!
	}	
	//display
	for(i=0;i<=9;i++)
		printf("NUM.%d=%d\n",i+1,arr[i]);
return 0;
}
