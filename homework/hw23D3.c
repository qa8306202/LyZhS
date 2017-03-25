//input a hundreds of digits then output with space.
//how to use "\" nad "%"  why not a\b or a%b

#include<stdio.h>
#include<math.h> //pow is ^ in math,and ^ in C means xor
int main()
{
	int a,ge,bai,shi;
	printf("input a hundreds of digit:");
	scanf("%d",&a);
	ge=a%10;
	shi=(a/10)%10;
	bai=(a/100)%10;
	printf("%d,%d,%d\n",bai,shi,ge);	




return 0;
}
