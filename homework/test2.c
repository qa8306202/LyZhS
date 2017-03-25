//jinzhi zhuanhuan
#include<stdio.h>
int main()
{
	int num,i=0,j;//yiding yao fuzhi .
	int arr[1000]={0};
	printf("input a number:");
	scanf("%d",&num);
	while(num !=0)
	{
		arr[i]=num%2;
		num=num/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
		printf("%d",arr[j]);
		printf("\n");
return 0;
}
