//calculate the sum of all the odd number or even number
#include<stdio.h>
int main()
{
	int sum,a,i;
	char ch;
	printf("input the number:");
	scanf("%d",&a);//huizai huancun zhong
	fflush(stdin);
	printf("Do you want to calculate the sum of even?[y/n]\n");
	//clear one stream
//OR USE WHILE	while() OR input " " before %c
	scanf("%c",&ch);
	printf("c=%c",ch);
	if (ch==89 || ch==121) //calculate the sum of even
	{
		for(i=2;i<=a;i=i+2)
		{
			sum+=i;	
		}	
		printf("the sum of even is %d",sum);
	}
	else
	{	
		for(i=1;i<=a;i=i+2)
			{
				sum+=i;
			}
				printf("the sum of odd is %d",sum);
	}



return 0;
}
