//how to compute leap years?
//one year which can be divided by 4 and can't be divided by 100  is leap year.
//one year which can be divided by 400  is leap year.
#include<stdio.h>
int main()
{
int y;
printf("please input an year :");
scanf("%d",&y);
if (y%400==0)
	printf("This year is leap year.\n");
	else if (y%4==0 && y%100!=0)	
	printf("This year is leap year.\n");
	else	
	printf("This year is not leap year.\n");

return 0;
}
