#include<stdio.h>
int main()
{
	int array[20]={1,1};
	int i=2;
	for(;i<20;i++)//if i<=20 then the program is boom,
		array[i]=array[i-1]+array[i-2];
	printf("%d\n",array[19]);//0-19



return 0;
}
